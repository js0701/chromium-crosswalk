// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Copyright (c) 2015 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/bullet/DOMWindowBullet.h"

#include "core/frame/LocalDOMWindow.h"
#include "core/workers/WorkerGlobalScope.h"
#include "modules/bullet/Bullet.h"

namespace blink {

DOMWindowBullet::DOMWindowBullet(LocalDOMWindow& window)
{
}

DOMWindowBullet::DOMWindowBullet(WorkerGlobalScope& worker)
{
}

DOMWindowBullet::~DOMWindowBullet()
{
}

const char* DOMWindowBullet::supplementName()
{
    return "DOMWindowBullet";
}

DOMWindowBullet& DOMWindowBullet::from(LocalDOMWindow& window)
{
    DOMWindowBullet* bullet = static_cast<DOMWindowBullet*>(WillBeHeapSupplement<LocalDOMWindow>::from(window, supplementName()));
    if (!bullet) {
        bullet = new DOMWindowBullet(window);
        WillBeHeapSupplement<LocalDOMWindow>::provideTo(window, supplementName(), adoptPtrWillBeNoop(bullet));
    }
    return *bullet;
}

DOMWindowBullet& DOMWindowBullet::from(WorkerGlobalScope& worker)
{
    DOMWindowBullet* bullet = static_cast<DOMWindowBullet*>(WillBeHeapSupplement<WorkerGlobalScope>::from(woker, supplementName()));
    if (!bullet) {
        bullet = new DOMWindowBullet(worker);
        WillBeHeapSupplement<WorkerGlobalScope::provideTo(worker, supplementName(), adoptPtrWillBeNoop(bullet));
    }
    return *bullet;
}


Bullet* DOMWindowBullet::bullet(DOMWindow& window)
{
    return DOMWindowBullet::from(toLocalDOMWindow(window)).bullet();
}

Bullet* DOMWindowBullet::bullet(WorkerGlobalScope& worker)
{
    return DOMWindowBullet::from(worker).bullet();
}


Bullet* DOMWindowBullet::bullet() const
{
    if (!m_bullet && frame())
        m_bullet = Bullet::create();
    return m_bullet.get();
}

} // namespace blink
