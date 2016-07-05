#include "config.h"
#include "btCollisionDispatcherB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionDispatcherB:: btCollisionDispatcherB() {} 

btCollisionDispatcherB:: ~btCollisionDispatcherB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCollisionDispatcher*) m_impl;
    }
    m_impl = NULL;

 }

btCollisionDispatcherB* btCollisionDispatcherB::  create(btDefaultCollisionConfigurationB* conf) { 
    btCollisionDispatcherB *wrapper = new btCollisionDispatcherB();
    btCollisionDispatcher *impl = new btCollisionDispatcher((btDefaultCollisionConfiguration*)(conf->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("conf", conf);
    return wrapper;
}

}
