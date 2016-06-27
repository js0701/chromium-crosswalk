#include "config.h"
#include "btSphereShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btSphereShapeB:: btSphereShapeB() {} 

btSphereShapeB:: ~btSphereShapeB() {
}

btSphereShapeB* btSphereShapeB::  create(float radius) { 
    btSphereShapeB *wrapper = new btSphereShapeB();
    btSphereShape *impl = new btSphereShape(radius);
    wrapper->setImpl(impl, true);
    return wrapper;
}

void btSphereShapeB:: setMargin(float margin) {
    btSphereShape *impl = (btSphereShape*) m_impl;
    impl->setMargin(margin);
}

float btSphereShapeB:: getMargin() {
    btSphereShape *impl = (btSphereShape*) m_impl;
    return impl->getMargin();
}

}
