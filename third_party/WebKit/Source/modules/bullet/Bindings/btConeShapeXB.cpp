#include "config.h"
#include "btConeShapeXB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConeShapeXB:: btConeShapeXB() {} 

btConeShapeXB:: ~btConeShapeXB() {

 }

btConeShapeXB* btConeShapeXB::  create(float radius, float height) { 
    btConeShapeXB *wrapper = new btConeShapeXB();
    btConeShapeX *impl = new btConeShapeX(radius, height);
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
