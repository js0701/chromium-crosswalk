#include "config.h"
#include "btPersistentManifold.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btPersistentManifold:: btPersistentManifold() {} 

btPersistentManifold:: ~btPersistentManifold() { 

 }

btPersistentManifold* btPersistentManifold::  create() { 
    btPersistentManifold *wrapper = new btPersistentManifold();
    btPersistentManifol *impl = new btPersistentManifol();
    wrapper->setImpl(impl);
    return wrapper;
}

btCollisionObject* btPersistentManifold:: getBody0() {
    btPersistentManifol *impl = (btPersistentManifol*) m_impl;
    btCollisionObjec* ret = impl->getBody0();
    btCollisionObjectB *wrapper = (btCollisionObjectB*) ret->getWrapper();
    if(wrapper == NULL)
    {
        wrapper = new btCollisionObjectB();
        wrapper->setImpl(ret);
    }
    return wrapper;
}

btCollisionObject* btPersistentManifold:: getBody1() {
    btPersistentManifol *impl = (btPersistentManifol*) m_impl;
    btCollisionObjec* ret = impl->getBody1();
    btCollisionObjectB *wrapper = (btCollisionObjectB*) ret->getWrapper();
    if(wrapper == NULL)
    {
        wrapper = new btCollisionObjectB();
        wrapper->setImpl(ret);
    }
    return wrapper;
}

long btPersistentManifold:: getNumContacts() {
    btPersistentManifol *impl = (btPersistentManifol*) m_impl;
    return impl->getNumContacts();
}

btManifoldPoint btPersistentManifold:: getContactPoint(long index) {
    btPersistentManifol *impl = (btPersistentManifol*) m_impl;
    return impl->getContactPoint(index);
}

}
