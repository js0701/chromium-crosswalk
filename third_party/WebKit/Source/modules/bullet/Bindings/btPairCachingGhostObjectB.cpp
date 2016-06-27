#include "config.h"
#include "btPairCachingGhostObjectB.h"
#include "../btBulletDynamicsCommon.h"
#include "../BulletCollision/CollisionDispatch/btGhostObject.h"

namespace blink {
btPairCachingGhostObjectB:: btPairCachingGhostObjectB() {} 

btPairCachingGhostObjectB:: ~btPairCachingGhostObjectB() {

}

btPairCachingGhostObjectB* btPairCachingGhostObjectB::  create() { 
    btPairCachingGhostObjectB *wrapper = new btPairCachingGhostObjectB();
    btPairCachingGhostObject *impl = new btPairCachingGhostObject();
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
