#include "config.h"
#include "btCylinderShapeXB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCylinderShapeXB:: btCylinderShapeXB() {} 

btCylinderShapeXB:: ~btCylinderShapeXB() {

 }

btCylinderShapeXB* btCylinderShapeXB::  create(btVector3B* halfExtents) { 
    btCylinderShapeXB *wrapper = new btCylinderShapeXB();
    btCylinderShapeX *impl = new btCylinderShapeX(*(btVector3*)(halfExtents->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("halfExtents", halfExtents);
    return wrapper;
}

}
