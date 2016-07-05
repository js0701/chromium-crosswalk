#include "config.h"
#include "btCollisionWorldClosestRayResultCallbackB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionWorldClosestRayResultCallbackB:: btCollisionWorldClosestRayResultCallbackB() {}

btCollisionWorldClosestRayResultCallbackB:: ~btCollisionWorldClosestRayResultCallbackB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCollisionWorld::ClosestRayResultCallback*) m_impl;
    }
    m_impl = NULL;

}

btCollisionWorldClosestRayResultCallbackB* btCollisionWorldClosestRayResultCallbackB::  create(btVector3B* from, btVector3B* to) {
    btCollisionWorldClosestRayResultCallbackB *wrapper = new btCollisionWorldClosestRayResultCallbackB();
    btCollisionWorld::ClosestRayResultCallback *impl = new btCollisionWorld::ClosestRayResultCallback(*(btVector3*)(from->getImpl()), *(btVector3*)(to->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("rayFromWorld", from);
    wrapper->setRef("rayToWorld", to);
    return wrapper;
}

void btCollisionWorldClosestRayResultCallbackB::  setM_rayFromWorld(btVector3B* value ) {
    btCollisionWorld::ClosestRayResultCallback *impl = (btCollisionWorld::ClosestRayResultCallback*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_rayFromWorld = *ret;
    //if(!m_refedWrappers.contains(value))
    //    m_refedWrappers.append(value);
    setRef("rayFromWorld", value);
}

btVector3B* btCollisionWorldClosestRayResultCallbackB:: m_rayFromWorld(){
    btCollisionWorld::ClosestRayResultCallback *impl = (btCollisionWorld::ClosestRayResultCallback*) m_impl;
    btVector3* ret = &(impl->m_rayFromWorld);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldClosestRayResultCallbackB::  setM_rayToWorld(btVector3B* value ) {
    btCollisionWorld::ClosestRayResultCallback *impl = (btCollisionWorld::ClosestRayResultCallback*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_rayToWorld = *ret;
    setRef("rayToWorld", value);
}

btVector3B* btCollisionWorldClosestRayResultCallbackB:: m_rayToWorld(){
    btCollisionWorld::ClosestRayResultCallback *impl = (btCollisionWorld::ClosestRayResultCallback*) m_impl;
    btVector3* ret = &(impl->m_rayToWorld);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldClosestRayResultCallbackB::  setM_hitNormalWorld(btVector3B* value ) {
    btCollisionWorld::ClosestRayResultCallback *impl = (btCollisionWorld::ClosestRayResultCallback*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_hitNormalWorld = *ret;
    setRef("hitNormalWorld", value);
}

btVector3B* btCollisionWorldClosestRayResultCallbackB:: m_hitNormalWorld(){
    btCollisionWorld::ClosestRayResultCallback *impl = (btCollisionWorld::ClosestRayResultCallback*) m_impl;
    btVector3* ret = &(impl->m_hitNormalWorld);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldClosestRayResultCallbackB::  setM_hitPointWorld(btVector3B* value ) {
    btCollisionWorld::ClosestRayResultCallback *impl = (btCollisionWorld::ClosestRayResultCallback*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_hitPointWorld = *ret;
    setRef("hitPointWorld", value);
}

btVector3B* btCollisionWorldClosestRayResultCallbackB:: m_hitPointWorld(){
    btCollisionWorld::ClosestRayResultCallback *impl = (btCollisionWorld::ClosestRayResultCallback*) m_impl;
    btVector3* ret = &(impl->m_hitPointWorld);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
