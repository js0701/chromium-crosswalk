#include "config.h"
#include "btCylinderShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCylinderShapeB:: btCylinderShapeB() {} 

btCylinderShapeB:: ~btCylinderShapeB() { 

 }

btCylinderShapeB* btCylinderShapeB::  create(btVector3B* halfExtents) { 
    btCylinderShapeB *wrapper = new btCylinderShapeB();
    btCylinderShape *impl = new btCylinderShape(*(btVector3*)(halfExtents->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("halfExtents", halfExtents);
    return wrapper;
}

void btCylinderShapeB:: setMargin(float margin) {
    btCylinderShape *impl = (btCylinderShape*) m_impl;
    impl->setMargin(margin);
}

float btCylinderShapeB:: getMargin() {
    btCylinderShape *impl = (btCylinderShape*) m_impl;
    return impl->getMargin();
}

}
