#include "config.h"
#include "btDefaultMotionStateB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDefaultMotionStateB:: btDefaultMotionStateB() {} 

btDefaultMotionStateB:: ~btDefaultMotionStateB() {
    
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btDefaultMotionState*) m_impl;
    }
    m_impl = NULL;

 }

btDefaultMotionStateB* btDefaultMotionStateB::  create() { 
    btDefaultMotionStateB *wrapper = new btDefaultMotionStateB();
    btDefaultMotionState *impl = new btDefaultMotionState();
    wrapper->setImpl(impl, true);
    return wrapper;
}

btDefaultMotionStateB* btDefaultMotionStateB::  create(btTransformB* startTrans) { 
    btDefaultMotionStateB *wrapper = new btDefaultMotionStateB();
    btDefaultMotionState *impl = new btDefaultMotionState(*(btTransform*)(startTrans->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("startTrans", startTrans);
    return wrapper;
}

btDefaultMotionStateB* btDefaultMotionStateB::  create(btTransformB* startTrans, btTransformB* centerOfMassOffset) { 
    btDefaultMotionStateB *wrapper = new btDefaultMotionStateB();
    btDefaultMotionState *impl = new btDefaultMotionState(*(btTransform*)(startTrans->getImpl()), *(btTransform*)(centerOfMassOffset->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("startTrans", startTrans);
    wrapper->setRef("centerOfMassOffset", centerOfMassOffset);
    return wrapper;
}

void btDefaultMotionStateB::  setM_graphicsWorldTrans(btTransformB* value ) {
    btDefaultMotionState *impl = (btDefaultMotionState*) m_impl;
    btTransform* ret = (btTransform*)(value->getImpl());
    impl->m_graphicsWorldTrans = *ret;
    setRef("graphicsWorldTrans", value);

}

btTransformB* btDefaultMotionStateB:: m_graphicsWorldTrans(){
    btDefaultMotionState *impl = (btDefaultMotionState*) m_impl;
    btTransform* ret = &(impl->m_graphicsWorldTrans);
    btTransformB *wrapper = (btTransformB*) btBlinkWrapperRepo::getWrapperForImpl(ret);//(btTransformB*) ret->getWrapper();
    if(wrapper == NULL)
    {
        wrapper = new btTransformB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
