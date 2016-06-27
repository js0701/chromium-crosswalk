// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/bullet/GlobalBullet.h"

#include "core/dom/ExecutionContext.h"
#include "core/frame/LocalDOMWindow.h"
#include "core/frame/UseCounter.h"
#include "core/workers/WorkerGlobalScope.h"
#include "modules/bullet/Bullet.h"
#include "platform/Supplementable.h"
#include "platform/heap/Handle.h"
#include "platform/weborigin/DatabaseIdentifier.h"
#include "public/platform/Platform.h"

namespace blink {

namespace {

template <typename T>
class GlobalBulletImpl final : public NoBaseWillBeGarbageCollectedFinalized<GlobalBulletImpl<T>>, public WillBeHeapSupplement<T> {
    WILL_BE_USING_GARBAGE_COLLECTED_MIXIN(GlobalBulletImpl);
public:
    static GlobalBulletImpl& from(T& supplementable, ExecutionContext* executionContext)
    {
        GlobalBulletImpl* supplement = static_cast<GlobalBulletImpl*>(WillBeHeapSupplement<T>::from(supplementable, name()));
        if (!supplement) {
            supplement = new GlobalBulletImpl();
            WillBeHeapSupplement<T>::provideTo(supplementable, name(), adoptPtrWillBeNoop(supplement));
        }
        return *supplement;
    }

    ~GlobalBulletImpl()
    {

    }

    Bullet* bullet(T& fetchingScope)
    {
        if(!m_bullet)
            m_bullet = Bullet::create();
        return m_bullet;
    }

    // Promptly dispose of associated Bullet.
    EAGERLY_FINALIZE();
    DEFINE_INLINE_VIRTUAL_TRACE()
    {
        visitor->trace(m_bullet);
        WillBeHeapSupplement<T>::trace(visitor);
    }

private:
    GlobalBulletImpl()
    {
    }

    static const char* name() { return "Bullet"; }

    PersistentWillBeMember<Bullet> m_bullet;
};

} // namespace

Bullet* GlobalBullet::bullet(DOMWindow& window)
{
    return GlobalBulletImpl<LocalDOMWindow>::from(toLocalDOMWindow(window), window.executionContext()).bullet(toLocalDOMWindow(window));
}

Bullet* GlobalBullet::bullet(WorkerGlobalScope& worker)
{
    return GlobalBulletImpl<WorkerGlobalScope>::from(worker, worker.executionContext()).bullet(worker);
}

} // namespace blink
