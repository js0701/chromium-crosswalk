#include "config.h"
#include "btGhostObjectB.h"
#include "../btBulletDynamicsCommon.h"
#include "../BulletCollision/CollisionDispatch/btGhostObject.h"

namespace blink {
btGhostObjectB:: btGhostObjectB() {} 

btGhostObjectB:: ~btGhostObjectB() {

 if(m_impl)
 {
  //m_impl->setWrapper(NULL);
  btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
  if(m_isOwner)
     delete (btGhostObject*) m_impl;
 }
 m_impl = NULL;

 }

btGhostObjectB* btGhostObjectB::  create() { 
    btGhostObjectB *wrapper = new btGhostObjectB();
    btGhostObject *impl = new btGhostObject();
    wrapper->setImpl(impl, true);
    return wrapper;
}

long btGhostObjectB:: getNumOverlappingObjects() {
    btGhostObject *impl = (btGhostObject*) m_impl;
    return impl->getNumOverlappingObjects();
}

btCollisionObjectB* btGhostObjectB:: getOverlappingObject(long index) {
    btGhostObject *impl = (btGhostObject*) m_impl;
    btCollisionObject* ret = impl->getOverlappingObject(index);
    btCollisionObjectB *wrapper = (btCollisionObjectB*)  btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btCollisionObjectB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
