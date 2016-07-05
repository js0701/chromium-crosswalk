#include "config.h"
#include "btCylinderShapeZB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCylinderShapeZB:: btCylinderShapeZB() {} 

btCylinderShapeZB:: ~btCylinderShapeZB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCylinderShapeZ*) m_impl;
    }
    m_impl = NULL;

 }

btCylinderShapeZB* btCylinderShapeZB::  create(btVector3B* halfExtents) { 
    btCylinderShapeZB *wrapper = new btCylinderShapeZB();
    btCylinderShapeZ *impl = new btCylinderShapeZ(*(btVector3*)(halfExtents->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("halfExtents", halfExtents);
    return wrapper;
}

}
