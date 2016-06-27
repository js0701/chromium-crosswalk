// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DOMWindowBullet_h
#define DOMWindowBullet_h

#include "core/frame/DOMWindowProperty.h"
#include "platform/Supplementable.h"
#include "platform/heap/Handle.h"

namespace blink {

class Bullet;
class DOMWindow;
class WorkerGlobalScope;

class DOMWindowBullet final : public NoBaseWillBeGarbageCollectedFinalized<DOMWindowBullet> {
    
    WILL_BE_USING_GARBAGE_COLLECTED_MIXIN(DOMWindowBullet);
public:
    virtual ~DOMWindowBullet();
    static DOMWindowBullet& from(LocalDOMWindow&);
    static DOMWindowBullet& from(WorkerGlobalScope&);
    static Bullet* bullet(DOMWindow&);
    static Bullet* bullet(WorkerGlobalScope&);
    Bullet* bullet() const;
    //DECLARE_VIRTUAL_TRACE() {m_bullet->trace();}

private:
    DOMWindowBullet(LocalDOMWindow&);
    DOMWindowBullet(WorkerGlobalScope&);
    static const char* supplementName();

    mutable PersistentWillBeMember<Bullet> m_bullet;
};

} // namespace blink

#endif // DOMWindowBullet_h
