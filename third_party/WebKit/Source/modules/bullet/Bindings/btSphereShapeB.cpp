#include "config.h"
#include "btSphereShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btSphereShapeB:: btSphereShapeB() {} 

btSphereShapeB:: ~btSphereShapeB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btSphereShape*) m_impl;
    }
    m_impl = NULL;
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
