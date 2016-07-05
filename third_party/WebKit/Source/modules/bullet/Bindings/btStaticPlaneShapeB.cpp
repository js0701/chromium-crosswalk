#include "config.h"
#include "btStaticPlaneShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btStaticPlaneShapeB:: btStaticPlaneShapeB() {} 

btStaticPlaneShapeB:: ~btStaticPlaneShapeB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btStaticPlaneShape*) m_impl;
    }
    m_impl = NULL;
}

btStaticPlaneShapeB* btStaticPlaneShapeB::  create(btVector3B* planeNormal, float planeConstant) { 
    btStaticPlaneShapeB *wrapper = new btStaticPlaneShapeB();
    btStaticPlaneShape *impl = new btStaticPlaneShape(*(const btVector3*)(planeNormal->getImpl()), planeConstant);
    wrapper->setImpl(impl, true);
    wrapper->setRef("planeNormal", planeNormal);
    return wrapper;
}

}
