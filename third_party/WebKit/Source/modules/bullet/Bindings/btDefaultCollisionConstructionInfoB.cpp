#include "config.h"
#include "btDefaultCollisionConstructionInfoB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDefaultCollisionConstructionInfoB:: btDefaultCollisionConstructionInfoB() {} 

btDefaultCollisionConstructionInfoB:: ~btDefaultCollisionConstructionInfoB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btDefaultCollisionConstructionInfo*) m_impl;
    }
    m_impl = NULL;

 }

btDefaultCollisionConstructionInfoB* btDefaultCollisionConstructionInfoB::  create() { 
    btDefaultCollisionConstructionInfoB *wrapper = new btDefaultCollisionConstructionInfoB();
    btDefaultCollisionConstructionInfo *impl = new btDefaultCollisionConstructionInfo();
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
