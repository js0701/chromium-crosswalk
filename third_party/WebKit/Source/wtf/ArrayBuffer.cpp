/*
 * Copyright (C) 2009 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "wtf/ArrayBuffer.h"

#include "wtf/ArrayBufferView.h"
#include "wtf/RefPtr.h"
#include "wtf/MainThread.h"
#include "platform/ThreadSafeFunctional.h"
#include "platform/Task.h"
#include "public/platform/Platform.h"
#include "public/platform/WebTraceLocation.h"
//#include "core/dom/ExecutionContext.h"
//#include "core/dom/CrossThreadTask.h"
#include "wtf/Functional.h"


namespace WTF {

bool ArrayBuffer::transfer(ArrayBufferContents& result)
{
    ASSERT(!isShared());
    RefPtr<ArrayBuffer> keepAlive(this);

    if (!m_contents.data()) {
        result.neuter();
        return false;
    }

    bool allViewsAreNeuterable = true;
    for (ArrayBufferView* i = m_firstView; i; i = i->m_nextView) {
        if (!i->isNeuterable())
            allViewsAreNeuterable = false;
    }

    if (allViewsAreNeuterable) {
        m_contents.transfer(result);
    } else {
        m_contents.copyTo(result);
        if (!result.data())
            return false;
    }

    while (m_firstView) {
        ArrayBufferView* current = m_firstView;
        removeView(current);
        if (allViewsAreNeuterable || current->isNeuterable())
            current->neuter();
    }

    m_isNeutered = true;

    return true;
}

bool ArrayBuffer::shareContentsWith(ArrayBufferContents& result)
{
    ASSERT(isShared());
    RefPtr<ArrayBuffer> keepAlive(this);

    if (!m_contents.data()) {
        result.neuter();
        return false;
    }

    m_contents.shareWith(result);
    return true;
}

void ArrayBuffer::addView(ArrayBufferView* view)
{
    view->m_buffer = this;
    view->m_prevView = 0;
    view->m_nextView = m_firstView;
    if (m_firstView)
        m_firstView->m_prevView = view;
    m_firstView = view;
}

void ArrayBuffer::removeView(ArrayBufferView* view)
{
    ASSERT(this == view->m_buffer);
    if (view->m_nextView)
        view->m_nextView->m_prevView = view->m_prevView;
    if (view->m_prevView)
        view->m_prevView->m_nextView = view->m_nextView;
    if (m_firstView == view)
        m_firstView = view->m_nextView;
    view->m_prevView = view->m_nextView = 0;
}

void ArrayBuffer::adopt(void* data, int lengthInByte)
{
      m_contents.adopt(data, lengthInByte);
      if(m_firstView)
      {
         ArrayBufferView* view = m_firstView;
         while(view)
         {
            view->adopt();
            view = view->m_nextView;
         }
      }
}

void ArrayBuffer::referenceForLaterAction()
{
   ref();//keep alive for later actions
   setBackup(true);
}


void ArrayBuffer::deRefInMainThread(char* buf)
{
   if(data() != (void*) buf) //means the buffer has been copied
       freeBackupBuffer(buf);
   deref();
}

//This function should be moved to thread main of renderer. Otherwise will get segmentation fault
void ArrayBuffer::deReferenceAsActionComplete(void* buf)
{
     m_bufToBeFree = NULL;
     setBackup(false);
     
    // if(data() != buf)
    //    m_bufToBeFree = buf;
     char* backupBuf = (char*) buf;
     if(data() ==buf) setBackup(false);
     
     blink::Platform::current()->mainThread()->taskRunner()->postTask(BLINK_FROM_HERE, new blink::Task(bind(&ArrayBuffer::deRefInMainThread, this, backupBuf)));
}

//A function for when set is call,use it for back up buffer and adopt if necessary

void ArrayBuffer::backUpAndAdopt()
{
    void* newbuf     = NULL;
    const void* buf  = m_contents.data();
    int lengthInByte = byteLength();
    
    copyAndReturnNewAddress(buf, lengthInByte, &newbuf);
    adopt(newbuf, lengthInByte);
}

}
