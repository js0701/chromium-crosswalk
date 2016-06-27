#include "config.h"
#include "btConeShapeZB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConeShapeZB:: btConeShapeZB() {} 

btConeShapeZB:: ~btConeShapeZB() {

 }

btConeShapeZB* btConeShapeZB::  create(float radius, float height) { 
    btConeShapeZB *wrapper = new btConeShapeZB();
    btConeShapeZ *impl = new btConeShapeZ(radius, height);
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
