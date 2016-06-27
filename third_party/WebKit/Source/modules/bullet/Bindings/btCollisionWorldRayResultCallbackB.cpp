#include "config.h"
#include "btCollisionWorldRayResultCallbackB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionWorldRayResultCallbackB:: btCollisionWorldRayResultCallbackB() {}

btCollisionWorldRayResultCallbackB:: ~btCollisionWorldRayResultCallbackB() {
}

bool btCollisionWorldRayResultCallbackB:: hasHit() {
    btCollisionWorld::RayResultCallback *impl = (btCollisionWorld::RayResultCallback*) m_impl;
    return impl->hasHit();
}

void btCollisionWorldRayResultCallbackB::  setM_collisionFilterGroup(short value ) {
    btCollisionWorld::RayResultCallback *impl = (btCollisionWorld::RayResultCallback*) m_impl;
    impl->m_collisionFilterGroup = value;
}

short btCollisionWorldRayResultCallbackB:: m_collisionFilterGroup(){
    btCollisionWorld::RayResultCallback *impl = (btCollisionWorld::RayResultCallback*) m_impl;
    return impl->m_collisionFilterGroup;
}

void btCollisionWorldRayResultCallbackB::  setM_collisionFilterMask(short value ) {
    btCollisionWorld::RayResultCallback *impl = (btCollisionWorld::RayResultCallback*) m_impl;
    impl->m_collisionFilterMask = value;
}

short btCollisionWorldRayResultCallbackB:: m_collisionFilterMask(){
    btCollisionWorld::RayResultCallback *impl = (btCollisionWorld::RayResultCallback*) m_impl;
    return impl->m_collisionFilterMask;
}

void btCollisionWorldRayResultCallbackB::  setM_collisionObject(btCollisionObjectB* value ) {
    btCollisionWorld::RayResultCallback *impl = (btCollisionWorld::RayResultCallback*) m_impl;
    btCollisionObject* ret = (btCollisionObject*)(value->getImpl());
    impl->m_collisionObject = ret;
    setRef("collisionObject", value);
}

btCollisionObjectB* btCollisionWorldRayResultCallbackB:: m_collisionObject(){
    btCollisionWorld::RayResultCallback *impl = (btCollisionWorld::RayResultCallback*) m_impl;
    btCollisionObject* ret = (btCollisionObject*) (impl->m_collisionObject);
    btCollisionObjectB *wrapper = (btCollisionObjectB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btCollisionObjectB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
