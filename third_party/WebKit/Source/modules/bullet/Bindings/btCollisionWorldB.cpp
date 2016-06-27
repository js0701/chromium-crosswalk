#include "config.h"
#include "btCollisionWorldB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionWorldB:: btCollisionWorldB() {} 

btCollisionWorldB:: ~btCollisionWorldB() {

}

btDispatcherB* btCollisionWorldB:: getDispatcher() {
    btCollisionWorld *impl = (btCollisionWorld*) m_impl;
    btDispatcher* ret = impl->getDispatcher();
    btDispatcherB* wrapper = (btDispatcherB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btDispatcherB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldB:: rayTest(btVector3B* rayFromWorld, btVector3B* rayToWorld, btCollisionWorldRayResultCallbackB* resultCallback) {
    btCollisionWorld *impl = (btCollisionWorld*) m_impl;
    impl->rayTest(*(btVector3*)(rayFromWorld->getImpl()),*(btVector3*)(rayToWorld->getImpl()),*(btCollisionWorld::RayResultCallback*)(resultCallback->getImpl()));
}

btOverlappingPairCacheB* btCollisionWorldB:: getPairCache() {
    btCollisionWorld *impl = (btCollisionWorld*) m_impl;
    btOverlappingPairCache* ret = impl->getPairCache();
    btOverlappingPairCacheB* wrapper = (btOverlappingPairCacheB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btOverlappingPairCacheB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

btDispatcherInfoB* btCollisionWorldB:: getDispatchInfo() {
    btCollisionWorld *impl = (btCollisionWorld*) m_impl;
    btDispatcherInfo* ret = &(impl->getDispatchInfo());
    btDispatcherInfoB* wrapper = (btDispatcherInfoB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btDispatcherInfoB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldB:: addCollisionObject(btCollisionObjectB* collisionObject) { 
    btCollisionWorld *impl = (btCollisionWorld*) m_impl;
    impl->addCollisionObject((btCollisionObject*)(collisionObject->getImpl()));
    setRef(collisionObject);
}

void btCollisionWorldB:: addCollisionObject(btCollisionObjectB* collisionObject, short collisionFilterGroup) { 
    btCollisionWorld *impl = (btCollisionWorld*) m_impl;
    impl->addCollisionObject((btCollisionObject*)(collisionObject->getImpl()),collisionFilterGroup);
    //if(!m_refedWrappers.contains(collisionObject))
    //    m_refedWrappers.append(collisionObject);
    setRef(collisionObject);
}

void btCollisionWorldB:: addCollisionObject(btCollisionObjectB* collisionObject, short collisionFilterGroup, short collisionFilterMask) {
    btCollisionWorld *impl = (btCollisionWorld*) m_impl;
    impl->addCollisionObject((btCollisionObject*)(collisionObject->getImpl()),collisionFilterGroup,collisionFilterMask);
    //if(!m_refedWrappers.contains(collisionObject))
    //    m_refedWrappers.append(collisionObject);
    setRef(collisionObject);
}

btBroadphaseInterfaceB* btCollisionWorldB:: getBroadphase() {
    btCollisionWorld *impl = (btCollisionWorld*) m_impl;
    btBroadphaseInterface* ret = impl->getBroadphase();
    btBroadphaseInterfaceB* wrapper = (btBroadphaseInterfaceB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btBroadphaseInterfaceB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldB:: convexSweepTest(btConvexShapeB* castShape, btTransformB* from, btTransformB* to, btCollisionWorldConvexResultCallbackB* resultCallback, float allowedCcdPenetration) {
    btCollisionWorld *impl = (btCollisionWorld*) m_impl;
    impl->convexSweepTest((btConvexShape*)(castShape->getImpl()),*(btTransform*)(from->getImpl()),*(btTransform*)(to->getImpl()),*(btCollisionWorld::ConvexResultCallback*)(resultCallback->getImpl()),allowedCcdPenetration);
}

void btCollisionWorldB:: contactPairTest(btCollisionObjectB* colObjA, btCollisionObjectB* colObjB, btCollisionWorldContactResultCallbackB* resultCallback) {
    btCollisionWorld *impl = (btCollisionWorld*) m_impl;
    impl->contactPairTest((btCollisionObject*)(colObjA->getImpl()),(btCollisionObject*)(colObjB->getImpl()),*(btCollisionWorld::ContactResultCallback*)(resultCallback->getImpl()));
}

void btCollisionWorldB:: contactTest(btCollisionObjectB* colObj, btCollisionWorldContactResultCallbackB* resultCallback) {
    btCollisionWorld *impl = (btCollisionWorld*) m_impl;
    impl->contactTest((btCollisionObject*)(colObj->getImpl()),*(btCollisionWorld::ContactResultCallback*)(resultCallback->getImpl()));
}

}
