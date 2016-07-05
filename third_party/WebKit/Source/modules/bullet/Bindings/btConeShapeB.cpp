#include "config.h"
#include "btConeShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConeShapeB:: btConeShapeB() {} 

btConeShapeB:: ~btConeShapeB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btConeShape*) m_impl;
    }
    m_impl = NULL;

 }

btConeShapeB* btConeShapeB::  create(float radius, float height) { 
    btConeShapeB *wrapper = new btConeShapeB();
    btConeShape *impl = new btConeShape(radius, height);
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
