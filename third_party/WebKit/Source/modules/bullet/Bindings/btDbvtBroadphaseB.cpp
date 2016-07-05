#include "config.h"
#include "btDbvtBroadphaseB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDbvtBroadphaseB:: btDbvtBroadphaseB() {} 

btDbvtBroadphaseB:: ~btDbvtBroadphaseB() {

    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btDbvtBroadphase*) m_impl;
    }
    m_impl = NULL;
    
 }

btDbvtBroadphaseB* btDbvtBroadphaseB::  create() { 
    btDbvtBroadphaseB *wrapper = new btDbvtBroadphaseB();
    btDbvtBroadphase *impl = new btDbvtBroadphase();
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
