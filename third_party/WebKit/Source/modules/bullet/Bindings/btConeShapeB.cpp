#include "config.h"
#include "btConeShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConeShapeB:: btConeShapeB() {} 

btConeShapeB:: ~btConeShapeB() {

 }

btConeShapeB* btConeShapeB::  create(float radius, float height) { 
    btConeShapeB *wrapper = new btConeShapeB();
    btConeShape *impl = new btConeShape(radius, height);
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
