#include "config.h"
#include "btPersistentManifoldB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btPersistentManifoldB:: btPersistentManifoldB() {} 

btPersistentManifoldB:: ~btPersistentManifoldB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btPersistentManifold*) m_impl;
    }
    m_impl = NULL;


 }

btPersistentManifoldB* btPersistentManifoldB::  create() { 
    btPersistentManifoldB *wrapper = new btPersistentManifoldB();
    btPersistentManifold *impl = new btPersistentManifold();
    wrapper->setImpl(impl, true);
    return wrapper;
}

btCollisionObjectB* btPersistentManifoldB:: getBody0() {
    btPersistentManifold *impl = (btPersistentManifold*) m_impl;
    btCollisionObject* ret = (btCollisionObject*) (impl->getBody0());
    btCollisionObjectB *wrapper = (btCollisionObjectB*)  btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btCollisionObjectB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

btCollisionObjectB* btPersistentManifoldB:: getBody1() {
    btPersistentManifold *impl = (btPersistentManifold*) m_impl;
    btCollisionObject* ret = (btCollisionObject*) (impl->getBody1());
    btCollisionObjectB *wrapper = (btCollisionObjectB*)  btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btCollisionObjectB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

long btPersistentManifoldB:: getNumContacts() {
    btPersistentManifold *impl = (btPersistentManifold*) m_impl;
    return impl->getNumContacts();
}

btManifoldPointB* btPersistentManifoldB:: getContactPoint(long index) {
    btPersistentManifold *impl = (btPersistentManifold*) m_impl;
    btManifoldPoint *ret = &(impl->getContactPoint(index));
    btManifoldPointB *wrapper = (btManifoldPointB*)  btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btManifoldPointB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
