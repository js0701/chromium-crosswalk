#include "config.h"
#include "btCylinderShapeXB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCylinderShapeXB:: btCylinderShapeXB() {} 

btCylinderShapeXB:: ~btCylinderShapeXB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCylinderShapeX*) m_impl;
    }
    m_impl = NULL;

 }

btCylinderShapeXB* btCylinderShapeXB::  create(btVector3B* halfExtents) { 
    btCylinderShapeXB *wrapper = new btCylinderShapeXB();
    btCylinderShapeX *impl = new btCylinderShapeX(*(btVector3*)(halfExtents->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("halfExtents", halfExtents);
    return wrapper;
}

}
