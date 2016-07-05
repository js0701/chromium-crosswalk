#include "config.h"
#include "btCapsuleShapeZB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCapsuleShapeZB:: btCapsuleShapeZB() {} 

btCapsuleShapeZB:: ~btCapsuleShapeZB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCapsuleShapeZ*) m_impl;
    }
    m_impl = NULL;

}

btCapsuleShapeZB* btCapsuleShapeZB::  create(float radius, float height) { 
    btCapsuleShapeZB *wrapper = new btCapsuleShapeZB();
    btCapsuleShapeZ *impl = new btCapsuleShapeZ(radius, height);
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
