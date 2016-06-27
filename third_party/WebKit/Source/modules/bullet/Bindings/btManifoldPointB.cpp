#include "config.h"
#include "btManifoldPointB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btManifoldPointB:: btManifoldPointB() {} 

btManifoldPointB:: ~btManifoldPointB() {

 }

btVector3B* btManifoldPointB:: getPositionWorldOnA() {
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = (btVector3*)(&(impl->getPositionWorldOnA()));
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

btVector3B* btManifoldPointB:: getPositionWorldOnB() {
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = (btVector3*)(&(impl->getPositionWorldOnB()));
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

double btManifoldPointB:: getAppliedImpulse() {
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    return impl->getAppliedImpulse();
}

double btManifoldPointB:: getDistance() {
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    return impl->getDistance();
}

void btManifoldPointB::  setM_localPointA(btVector3B* value ) {
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_localPointA = *ret;
    setRef("localPointA",value);
}

btVector3B* btManifoldPointB:: m_localPointA(){
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = &(impl->m_localPointA);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btManifoldPointB::  setM_localPointB(btVector3B* value ) {
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_localPointB = *ret;
    setRef("localPointB", value);

}

btVector3B* btManifoldPointB:: m_localPointB(){
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = &(impl->m_localPointB);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btManifoldPointB::  setM_positionWorldOnB(btVector3B* value ) {
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_positionWorldOnB = *ret;
    setRef("positionWorldOnB", value);

}

btVector3B* btManifoldPointB:: m_positionWorldOnB(){
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = &(impl->m_positionWorldOnB);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btManifoldPointB::  setM_positionWorldOnA(btVector3B* value ) {
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_positionWorldOnA = *ret;
    setRef("positionWorldOnA", value);
}

btVector3B* btManifoldPointB:: m_positionWorldOnA(){
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = &(impl->m_positionWorldOnA);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btManifoldPointB::  setM_normalWorldOnB(btVector3B* value ) {
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_normalWorldOnB = *ret;
    setRef("normalWorldOnB", value);
}

btVector3B* btManifoldPointB:: m_normalWorldOnB(){
    btManifoldPoint *impl = (btManifoldPoint*) m_impl;
    btVector3* ret = &(impl->m_normalWorldOnB);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
