#include "config.h"
#include "btCylinderShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCylinderShapeB:: btCylinderShapeB() {} 

btCylinderShapeB:: ~btCylinderShapeB() { 
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCylinderShape*) m_impl;
    }
    m_impl = NULL;

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
