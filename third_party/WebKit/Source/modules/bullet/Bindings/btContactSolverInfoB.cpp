#include "config.h"
#include "btContactSolverInfoB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btContactSolverInfoB:: btContactSolverInfoB() {} 

btContactSolverInfoB:: ~btContactSolverInfoB() {

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
