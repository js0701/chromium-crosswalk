#include "config.h"
#include "btDbvtBroadphaseB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDbvtBroadphaseB:: btDbvtBroadphaseB() {} 

btDbvtBroadphaseB:: ~btDbvtBroadphaseB() {

 }

btDbvtBroadphaseB* btDbvtBroadphaseB::  create() { 
    btDbvtBroadphaseB *wrapper = new btDbvtBroadphaseB();
    btDbvtBroadphase *impl = new btDbvtBroadphase();
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
