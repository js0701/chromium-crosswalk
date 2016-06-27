#include "config.h"
#include "btCapsuleShapeXB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCapsuleShapeXB:: btCapsuleShapeXB() {} 

btCapsuleShapeXB:: ~btCapsuleShapeXB() {
}

btCapsuleShapeXB* btCapsuleShapeXB::  create(float radius, float height) { 
    btCapsuleShapeXB *wrapper = new btCapsuleShapeXB();
    btCapsuleShapeX *impl = new btCapsuleShapeX(radius, height);
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
