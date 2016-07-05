#include "config.h"
#include "btCollisionWorldClosestConvexResultCallbackB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionWorldClosestConvexResultCallbackB:: btCollisionWorldClosestConvexResultCallbackB() {}

btCollisionWorldClosestConvexResultCallbackB:: ~btCollisionWorldClosestConvexResultCallbackB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCollisionWorld::ClosestConvexResultCallback*) m_impl;
    }
    m_impl = NULL;

}

btCollisionWorldClosestConvexResultCallbackB* btCollisionWorldClosestConvexResultCallbackB::  create(btVector3B* convexFromWorld, btVector3B* convexToWorld) {
    btCollisionWorldClosestConvexResultCallbackB *wrapper = new btCollisionWorldClosestConvexResultCallbackB();
    btCollisionWorld::ClosestConvexResultCallback *impl = new btCollisionWorld::ClosestConvexResultCallback(*(btVector3*)(convexFromWorld->getImpl()), *(btVector3*)(convexToWorld->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("convexFromWorld", convexFromWorld);
    wrapper->setRef("convexToWorld", convexToWorld);
    return wrapper;
}

void btCollisionWorldClosestConvexResultCallbackB::  setM_convexFromWorld(btVector3B* value ) {
    btCollisionWorld::ClosestConvexResultCallback *impl = (btCollisionWorld::ClosestConvexResultCallback*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_convexFromWorld = *ret;
    setRef("convexFromWorld", value);
}

btVector3B* btCollisionWorldClosestConvexResultCallbackB:: m_convexFromWorld(){
    btCollisionWorld::ClosestConvexResultCallback *impl = (btCollisionWorld::ClosestConvexResultCallback*) m_impl;
    btVector3* ret = &(impl->m_convexFromWorld);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldClosestConvexResultCallbackB::  setM_convexToWorld(btVector3B* value ) {
    btCollisionWorld::ClosestConvexResultCallback *impl = (btCollisionWorld::ClosestConvexResultCallback*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_convexToWorld = *ret;
    setRef("convexToWorld", value);
}

btVector3B* btCollisionWorldClosestConvexResultCallbackB:: m_convexToWorld(){
    btCollisionWorld::ClosestConvexResultCallback *impl = (btCollisionWorld::ClosestConvexResultCallback*) m_impl;
    btVector3* ret = &(impl->m_convexToWorld);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldClosestConvexResultCallbackB::  setM_hitNormalWorld(btVector3B* value ) {
    btCollisionWorld::ClosestConvexResultCallback *impl = (btCollisionWorld::ClosestConvexResultCallback*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_hitNormalWorld = *ret;
    //if(!m_refedWrappers.contains(value))
    //    m_refedWrappers.append(value);
    setRef("hitNormalWorld",value);
}

btVector3B* btCollisionWorldClosestConvexResultCallbackB:: m_hitNormalWorld(){
    btCollisionWorld::ClosestConvexResultCallback *impl = (btCollisionWorld::ClosestConvexResultCallback*) m_impl;
    btVector3* ret = &(impl->m_hitNormalWorld);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldClosestConvexResultCallbackB::  setM_hitPointWorld(btVector3B* value ) {
    btCollisionWorld::ClosestConvexResultCallback *impl = (btCollisionWorld::ClosestConvexResultCallback*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_hitPointWorld = *ret;
    //if(!m_refedWrappers.contains(value))
    //    m_refedWrappers.append(value);
    setRef("hitPointWorld", value);
}

btVector3B* btCollisionWorldClosestConvexResultCallbackB:: m_hitPointWorld(){
    btCollisionWorld::ClosestConvexResultCallback *impl = (btCollisionWorld::ClosestConvexResultCallback*) m_impl;
    btVector3* ret = &(impl->m_hitPointWorld);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
