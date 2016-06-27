#include "config.h"
#include "btAxisSweep3B.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btAxisSweep3B:: btAxisSweep3B() {}

btAxisSweep3B:: ~btAxisSweep3B() {

}

btAxisSweep3B* btAxisSweep3B::  create(btVector3B* worldAabbMin, btVector3B* worldAabbMax) {
    btAxisSweep3B *wrapper = new btAxisSweep3B();
    btAxisSweep3 *impl = new btAxisSweep3(*(btVector3*)(worldAabbMin->getImpl()), *(btVector3*)(worldAabbMax->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("worldAabbMin", worldAabbMin);
    wrapper->setRef("worldAabbMax", worldAabbMax);
    return wrapper;
}

btAxisSweep3B* btAxisSweep3B::  create(btVector3B* worldAabbMin, btVector3B* worldAabbMax, long maxHandles) {
    btAxisSweep3B *wrapper = new btAxisSweep3B();
    btAxisSweep3 *impl = new btAxisSweep3(*(btVector3*)(worldAabbMin->getImpl()), *(btVector3*)(worldAabbMax->getImpl()), maxHandles);
    wrapper->setImpl(impl, true);
    wrapper->setRef("worldAabbMin", worldAabbMin);
    wrapper->setRef("worldAabbMax", worldAabbMax);
    return wrapper;
}

btAxisSweep3B* btAxisSweep3B::  create(btVector3B* worldAabbMin, btVector3B* worldAabbMax, long maxHandles, btOverlappingPairCacheB* pairCache) {
    btAxisSweep3B *wrapper = new btAxisSweep3B();
    btAxisSweep3 *impl = new btAxisSweep3(*(btVector3*)(worldAabbMin->getImpl()), *(btVector3*)(worldAabbMax->getImpl()), maxHandles, (btOverlappingPairCache*)(pairCache->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("worldAabbMin", worldAabbMin);
    wrapper->setRef("worldAabbMax", worldAabbMax);
    wrapper->setRef("pairCache", pairCache);
    return wrapper;
}

btAxisSweep3B* btAxisSweep3B::  create(btVector3B* worldAabbMin, btVector3B* worldAabbMax, long maxHandles, btOverlappingPairCacheB* pairCache, bool disableRaycastAccelerator) {
    btAxisSweep3B *wrapper = new btAxisSweep3B();
    btAxisSweep3 *impl = new btAxisSweep3(*(btVector3*)(worldAabbMin->getImpl()), *(btVector3*)(worldAabbMax->getImpl()), maxHandles, (btOverlappingPairCache*)(pairCache->getImpl()), disableRaycastAccelerator);
    wrapper->setImpl(impl, true);
    wrapper->setRef("worldAabbMin", worldAabbMin);
    wrapper->setRef("worldAabbMax", worldAabbMax);
    wrapper->setRef("pairCache", pairCache);
    return wrapper;
}

}
