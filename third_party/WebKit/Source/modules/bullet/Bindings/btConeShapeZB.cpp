#include "config.h"
#include "btConeShapeZB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConeShapeZB:: btConeShapeZB() {} 

btConeShapeZB:: ~btConeShapeZB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btConeShapeZ*) m_impl;
    }
    m_impl = NULL;

 }

btConeShapeZB* btConeShapeZB::  create(float radius, float height) { 
    btConeShapeZB *wrapper = new btConeShapeZB();
    btConeShapeZ *impl = new btConeShapeZ(radius, height);
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
