#include "config.h"
#include "btDbvtBroadphase.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDbvtBroadphase:: btDbvtBroadphase() {} 

btDbvtBroadphase:: ~btDbvtBroadphase() {
#if FREE_IMPL_IN_DESTRUCTOR
if(m_impl != null) delete (btDbvtBroadphas*) m_impl;
#endif
 }

btDbvtBroadphase* btDbvtBroadphase::  Create() { 
    btDbvtBroadphase *wrapper = new btDbvtBroadphase();
    btDbvtBroadphas *impl = new btDbvtBroadphas();
    wrapper->setImpl(impl);
    return wrapper;
}

}
