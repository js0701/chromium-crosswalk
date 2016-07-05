#include "config.h"
#include "btConstraintSolverB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConstraintSolverB:: btConstraintSolverB() {} 

btConstraintSolverB:: ~btConstraintSolverB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btConstraintSolver*) m_impl;
    }
    m_impl = NULL;

 }

}
