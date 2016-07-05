#include "config.h"
#include "btSequentialImpulseConstraintSolverB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btSequentialImpulseConstraintSolverB:: btSequentialImpulseConstraintSolverB() {} 

btSequentialImpulseConstraintSolverB:: ~btSequentialImpulseConstraintSolverB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btSequentialImpulseConstraintSolver*) m_impl;
    }
    m_impl = NULL;

}

btSequentialImpulseConstraintSolverB* btSequentialImpulseConstraintSolverB::  create() { 
    btSequentialImpulseConstraintSolverB *wrapper = new btSequentialImpulseConstraintSolverB();
    btSequentialImpulseConstraintSolver *impl = new btSequentialImpulseConstraintSolver();
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
