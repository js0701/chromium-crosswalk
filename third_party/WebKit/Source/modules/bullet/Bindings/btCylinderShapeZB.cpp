#include "config.h"
#include "btCylinderShapeZB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCylinderShapeZB:: btCylinderShapeZB() {} 

btCylinderShapeZB:: ~btCylinderShapeZB() {

 }

btCylinderShapeZB* btCylinderShapeZB::  create(btVector3B* halfExtents) { 
    btCylinderShapeZB *wrapper = new btCylinderShapeZB();
    btCylinderShapeZ *impl = new btCylinderShapeZ(*(btVector3*)(halfExtents->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("halfExtents", halfExtents);
    return wrapper;
}

}
