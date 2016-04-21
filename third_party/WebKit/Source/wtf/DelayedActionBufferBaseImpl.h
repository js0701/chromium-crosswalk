#ifndef DELAYED_ACTION_BUFFER_BASE_IMPL_h
#define DELAYED_ACTION_BUFFER_BASE_IMPL_h

#include "wtf/Vector.h"
#include "wtf/ThreadingPrimitives.h"
#include <string.h>
#include "wtf/DelayedActionBufferBase.h"

namespace WTF{
class DelayedActionBufferBaseImpl: public DelayedActionBufferBase {

public:
    DelayedActionBufferBaseImpl()
    {
       m_actsCount = 0;
    }
    virtual ~DelayedActionBufferBaseImpl();

    bool isBackupNeeded()
    {
      return (m_actsCount > 0);
    }

    void setBackup(bool ifBackup) //Should use int?
    {
      if(!ifBackup && m_actsCount > 0)
      m_actsCount --;
      else if(ifBackup)
      m_actsCount ++;
    }


protected:

    void copyAndReturnNewAddress(const void* buf, int lengthInByte, void** newbuf);

    void freeBackupBuffer(void* buf);

    int m_actsCount;
    Vector<void*> m_backupBuffers;
    Vector<int>   m_backupRefedCount;
    mutable Mutex m_bufferLock;
};
}
#endif
