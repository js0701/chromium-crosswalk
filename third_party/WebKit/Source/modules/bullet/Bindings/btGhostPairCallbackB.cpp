#include "config.h"
#include "btGhostPairCallbackB.h"
#include "../btBulletDynamicsCommon.h"
#include "../BulletCollision/CollisionDispatch/btGhostObject.h"

namespace blink {
btGhostPairCallbackB:: btGhostPairCallbackB() {} 

btGhostPairCallbackB:: ~btGhostPairCallbackB() {

 }

btGhostPairCallbackB* btGhostPairCallbackB::  create() { 
    btGhostPairCallbackB *wrapper = new btGhostPairCallbackB();
    btGhostPairCallback *impl = new btGhostPairCallback();
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
