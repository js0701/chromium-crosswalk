#include "config.h"
#include "btConeShapeXB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConeShapeXB:: btConeShapeXB() {} 

btConeShapeXB:: ~btConeShapeXB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btConeShapeX*) m_impl;
    }
    m_impl = NULL;

 }

btConeShapeXB* btConeShapeXB::  create(float radius, float height) { 
    btConeShapeXB *wrapper = new btConeShapeXB();
    btConeShapeX *impl = new btConeShapeX(radius, height);
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
