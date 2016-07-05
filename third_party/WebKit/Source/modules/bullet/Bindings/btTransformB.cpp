#include "config.h"
#include "btTransformB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btTransformB:: btTransformB() {} 

btTransformB:: ~btTransformB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btTransform*) m_impl;
    }
    m_impl = NULL;
}

btTransformB* btTransformB::  create() { 
    btTransformB *wrapper = new btTransformB();
    btTransform *impl = new btTransform();
    wrapper->setImpl(impl, true);
    return wrapper;
}

btTransformB* btTransformB::  create(btQuaternionB* q, btVector3B* v) { 
    btTransformB *wrapper = new btTransformB();
    btTransform *impl = new btTransform(*(const btQuaternion*)(q->getImpl()), *(const btVector3*)(v->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("basis",  q);
    wrapper->setRef("origin", v);
    return wrapper;
}

void btTransformB:: setIdentity() {
    btTransform *impl = (btTransform*) m_impl;
    impl->setIdentity();
}

void btTransformB:: setOrigin(btVector3B* origin) {
    btTransform *impl = (btTransform*) m_impl;
    impl->setOrigin(*(const btVector3*)(origin->getImpl()));
    setRef("origin", origin);
}

void btTransformB:: setRotation(btQuaternionB* rotation) {
    btTransform *impl = (btTransform*) m_impl;
    impl->setRotation(*(const btQuaternion*)(rotation->getImpl()));
    setRef("rotation", rotation);
}

btVector3B* btTransformB:: getOrigin() {
    btTransform *impl = (btTransform*) m_impl;
    btVector3*  ret = &(impl->getOrigin());
    //btVector3* newret = new btVector3(ret);
    btVector3B* wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    
    return wrapper;
}

btQuaternionB* btTransformB:: getRotation() {
    btTransform *impl = (btTransform*) m_impl;
    btQuaternion  ret = impl->getRotation();
    btQuaternion* newret = new btQuaternion(ret);
    //btQuaternionB* wrapper = (btQuaternionB*) btBlinkWrapperRepo::getWrapperForImpl(newret);
    //if(wrapper == NULL)
    //{
    btQuaternionB* wrapper = new btQuaternionB();
    wrapper->setImpl(newret, true);
    //}
    return wrapper;
}

btMatrix3x3B* btTransformB:: getBasis() {
    btTransform *impl = (btTransform*) m_impl;
    btMatrix3x3* ret = &(impl->getBasis());
    btMatrix3x3B* wrapper = (btMatrix3x3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btMatrix3x3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
