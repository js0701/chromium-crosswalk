#include "config.h"
#include "btBoxShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btBoxShapeB:: btBoxShapeB() {} 

btBoxShapeB:: ~btBoxShapeB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btBoxShape*) m_impl;
    }
    m_impl = NULL;

}

btBoxShapeB* btBoxShapeB::  create(btVector3B* boxHalfExtents) { 
    btBoxShapeB *wrapper = new btBoxShapeB();
    btBoxShape *impl = new btBoxShape(*(btVector3*)(boxHalfExtents->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("boxHalfExtents", boxHalfExtents);
    return wrapper;
}

btBoxShapeB* btBoxShapeB::  create(float x, float y, float z) { 
    btVector3   vec3(x,y,z);
    btBoxShapeB *wrapper = new btBoxShapeB();
    btBoxShape *impl = new btBoxShape(vec3);
    wrapper->setImpl(impl, true);
    return wrapper;
}

void btBoxShapeB:: setMargin(float margin) {
    btBoxShape *impl = (btBoxShape*) m_impl;
    impl->setMargin(margin);
}

float btBoxShapeB:: getMargin() {
    btBoxShape *impl = (btBoxShape*) m_impl;
    return impl->getMargin();
}

}
