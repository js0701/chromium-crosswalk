#include "config.h"
#include "btCapsuleShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCapsuleShapeB:: btCapsuleShapeB() {} 

btCapsuleShapeB:: ~btCapsuleShapeB() {
     if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCapsuleShape*) m_impl;
    }
    m_impl = NULL;

}

btCapsuleShapeB* btCapsuleShapeB::  create(float radius, float height) { 
    btCapsuleShapeB *wrapper = new btCapsuleShapeB();
    btCapsuleShape *impl = new btCapsuleShape(radius, height);
    wrapper->setImpl(impl, true);
    return wrapper;
}

void btCapsuleShapeB:: setMargin(float margin) {
    btCapsuleShape *impl = (btCapsuleShape*) m_impl;
    impl->setMargin(margin);
}

float btCapsuleShapeB:: getMargin() {
    btCapsuleShape *impl = (btCapsuleShape*) m_impl;
    return impl->getMargin();
}

}
