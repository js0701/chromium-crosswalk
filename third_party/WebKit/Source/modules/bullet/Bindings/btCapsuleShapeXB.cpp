#include "config.h"
#include "btCapsuleShapeXB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCapsuleShapeXB:: btCapsuleShapeXB() {} 

btCapsuleShapeXB:: ~btCapsuleShapeXB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCapsuleShapeX*) m_impl;
    }
    m_impl = NULL;
}

btCapsuleShapeXB* btCapsuleShapeXB::  create(float radius, float height) { 
    btCapsuleShapeXB *wrapper = new btCapsuleShapeXB();
    btCapsuleShapeX *impl = new btCapsuleShapeX(radius, height);
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
