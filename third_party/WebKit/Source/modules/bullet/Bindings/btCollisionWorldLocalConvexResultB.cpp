#include "config.h"
#include "btCollisionWorldLocalConvexResultB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionWorldLocalConvexResultB:: btCollisionWorldLocalConvexResultB() {}

btCollisionWorldLocalConvexResultB:: ~btCollisionWorldLocalConvexResultB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCollisionWorld::LocalConvexResult*) m_impl;
    }
    m_impl = NULL;

}

btCollisionWorldLocalConvexResultB* btCollisionWorldLocalConvexResultB::  create(btCollisionObjectB* hitCollisionObject, btCollisionWorldLocalShapeInfoB* localShapeInfo, btVector3B* hitNormalLocal, btVector3B* hitPointLocal, float hitFraction) {
    btCollisionWorldLocalConvexResultB *wrapper = new btCollisionWorldLocalConvexResultB();
    btCollisionWorld::LocalConvexResult *impl = new btCollisionWorld::LocalConvexResult((btCollisionObject*)(hitCollisionObject->getImpl()), (btCollisionWorld::LocalShapeInfo*)(localShapeInfo->getImpl()), *(btVector3*)(hitNormalLocal->getImpl()), *(btVector3*)(hitPointLocal->getImpl()), hitFraction);
    wrapper->setImpl(impl, true);
    wrapper->setRef("hitCollisionObject", hitCollisionObject);
    wrapper->setRef("localShapeInfo", localShapeInfo);
    wrapper->setRef("hitNormalLocal", hitNormalLocal);
    wrapper->setRef("hitPointLocal", hitPointLocal);
    return wrapper;
}

void btCollisionWorldLocalConvexResultB::  setM_hitCollisionObject(btCollisionObjectB* value ) {
    btCollisionWorld::LocalConvexResult *impl = (btCollisionWorld::LocalConvexResult*) m_impl;
    btCollisionObject* ret = (btCollisionObject*)(value->getImpl());
    impl->m_hitCollisionObject = ret;
    setRef("hitCollisionObject", value);

}

btCollisionObjectB* btCollisionWorldLocalConvexResultB:: m_hitCollisionObject(){
    btCollisionWorld::LocalConvexResult *impl = (btCollisionWorld::LocalConvexResult*) m_impl;
    btCollisionObject* ret = (btCollisionObject*)(impl->m_hitCollisionObject);
    btCollisionObjectB *wrapper = (btCollisionObjectB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btCollisionObjectB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldLocalConvexResultB::  setM_localShapeInfo(btCollisionWorldLocalShapeInfoB* value ) {
    btCollisionWorld::LocalConvexResult *impl = (btCollisionWorld::LocalConvexResult*) m_impl;
    btCollisionWorld::LocalShapeInfo* ret = (btCollisionWorld::LocalShapeInfo*)(value->getImpl());
    impl->m_localShapeInfo = ret;
    setRef("localShapeInfo", value);
}

btCollisionWorldLocalShapeInfoB* btCollisionWorldLocalConvexResultB:: m_localShapeInfo(){
    btCollisionWorld::LocalConvexResult *impl = (btCollisionWorld::LocalConvexResult*) m_impl;
    btCollisionWorld::LocalShapeInfo* ret = impl->m_localShapeInfo;
    btCollisionWorldLocalShapeInfoB *wrapper = (btCollisionWorldLocalShapeInfoB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btCollisionWorldLocalShapeInfoB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldLocalConvexResultB::  setM_hitNormalLocal(btVector3B* value ) {
    btCollisionWorld::LocalConvexResult *impl = (btCollisionWorld::LocalConvexResult*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_hitNormalLocal = *ret;
    setRef("hitNormalLocal", value);
}

btVector3B* btCollisionWorldLocalConvexResultB:: m_hitNormalLocal(){
    btCollisionWorld::LocalConvexResult *impl = (btCollisionWorld::LocalConvexResult*) m_impl;
    btVector3* ret = &(impl->m_hitNormalLocal);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    
    return wrapper;
}

void btCollisionWorldLocalConvexResultB::  setM_hitPointLocal(btVector3B* value ) {
    btCollisionWorld::LocalConvexResult *impl = (btCollisionWorld::LocalConvexResult*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_hitPointLocal = *ret;
    setRef("hitPointLocal", value);
}

btVector3B* btCollisionWorldLocalConvexResultB:: m_hitPointLocal(){
    btCollisionWorld::LocalConvexResult *impl = (btCollisionWorld::LocalConvexResult*) m_impl;
    btVector3* ret = &(impl->m_hitPointLocal);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionWorldLocalConvexResultB::  setM_hitFraction(float value ) {
    btCollisionWorld::LocalConvexResult *impl = (btCollisionWorld::LocalConvexResult*) m_impl;
    impl->m_hitFraction = value;
}

float btCollisionWorldLocalConvexResultB:: m_hitFraction(){
    btCollisionWorld::LocalConvexResult *impl = (btCollisionWorld::LocalConvexResult*) m_impl;
    return impl->m_hitFraction;
}

}
