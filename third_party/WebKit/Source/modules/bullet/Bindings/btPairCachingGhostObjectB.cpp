#include "config.h"
#include "btPairCachingGhostObjectB.h"
#include "../btBulletDynamicsCommon.h"
#include "../BulletCollision/CollisionDispatch/btGhostObject.h"

namespace blink {
btPairCachingGhostObjectB:: btPairCachingGhostObjectB() {} 

btPairCachingGhostObjectB:: ~btPairCachingGhostObjectB() {
        if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btPairCachingGhostObject*) m_impl;
    }
    m_impl = NULL;

}

btPairCachingGhostObjectB* btPairCachingGhostObjectB::  create() { 
    btPairCachingGhostObjectB *wrapper = new btPairCachingGhostObjectB();
    btPairCachingGhostObject *impl = new btPairCachingGhostObject();
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
