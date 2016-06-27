#include "config.h"
#include "btCapsuleShapeZB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCapsuleShapeZB:: btCapsuleShapeZB() {} 

btCapsuleShapeZB:: ~btCapsuleShapeZB() {

}

btCapsuleShapeZB* btCapsuleShapeZB::  create(float radius, float height) { 
    btCapsuleShapeZB *wrapper = new btCapsuleShapeZB();
    btCapsuleShapeZ *impl = new btCapsuleShapeZ(radius, height);
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
