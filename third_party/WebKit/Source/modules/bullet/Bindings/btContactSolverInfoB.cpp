#include "config.h"
#include "btContactSolverInfoB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btContactSolverInfoB:: btContactSolverInfoB() {} 

btContactSolverInfoB:: ~btContactSolverInfoB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btContactSolverInfo*) m_impl;
    }
    m_impl = NULL;

 }

void btContactSolverInfoB::  setM_splitImpulse(bool value ) {
    btContactSolverInfo *impl = (btContactSolverInfo*) m_impl;
    impl->m_splitImpulse = value;
}

bool btContactSolverInfoB:: m_splitImpulse(){
    btContactSolverInfo *impl = (btContactSolverInfo*) m_impl;
    return impl->m_splitImpulse;
}

void btContactSolverInfoB::  setM_splitImpulsePenetrationThreshold(long value ) {
    btContactSolverInfo *impl = (btContactSolverInfo*) m_impl;
    impl->m_splitImpulsePenetrationThreshold = value;
}

long btContactSolverInfoB:: m_splitImpulsePenetrationThreshold(){
    btContactSolverInfo *impl = (btContactSolverInfo*) m_impl;
    return impl->m_splitImpulsePenetrationThreshold;
}

}
