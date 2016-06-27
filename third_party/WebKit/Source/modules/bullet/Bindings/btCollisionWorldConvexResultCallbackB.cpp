#include "config.h"
#include "btCollisionWorldConvexResultCallbackB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionWorldConvexResultCallbackB:: btCollisionWorldConvexResultCallbackB() {}

btCollisionWorldConvexResultCallbackB:: ~btCollisionWorldConvexResultCallbackB() {

}

bool btCollisionWorldConvexResultCallbackB:: hasHit() {
    btCollisionWorld::ConvexResultCallback *impl = (btCollisionWorld::ConvexResultCallback*) m_impl;
    return impl->hasHit();
}

void btCollisionWorldConvexResultCallbackB::  setM_collisionFilterGroup(short value ) {
    btCollisionWorld::ConvexResultCallback *impl = (btCollisionWorld::ConvexResultCallback*) m_impl;
    impl->m_collisionFilterGroup = value;
}

short btCollisionWorldConvexResultCallbackB:: m_collisionFilterGroup(){
    btCollisionWorld::ConvexResultCallback *impl = (btCollisionWorld::ConvexResultCallback*) m_impl;
    return impl->m_collisionFilterGroup;
}

void btCollisionWorldConvexResultCallbackB::  setM_collisionFilterMask(short value ) {
    btCollisionWorld::ConvexResultCallback *impl = (btCollisionWorld::ConvexResultCallback*) m_impl;
    impl->m_collisionFilterMask = value;
}

short btCollisionWorldConvexResultCallbackB:: m_collisionFilterMask(){
    btCollisionWorld::ConvexResultCallback *impl = (btCollisionWorld::ConvexResultCallback*) m_impl;
    return impl->m_collisionFilterMask;
}

void btCollisionWorldConvexResultCallbackB::  setM_closestHitFraction(float value ) {
    btCollisionWorld::ConvexResultCallback *impl = (btCollisionWorld::ConvexResultCallback*) m_impl;
    impl->m_closestHitFraction = value;
}

float btCollisionWorldConvexResultCallbackB:: m_closestHitFraction(){
    btCollisionWorld::ConvexResultCallback *impl = (btCollisionWorld::ConvexResultCallback*) m_impl;
    return impl->m_closestHitFraction;
}

}
