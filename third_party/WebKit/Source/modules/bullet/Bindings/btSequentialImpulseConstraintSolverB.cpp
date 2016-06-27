#include "config.h"
#include "btSequentialImpulseConstraintSolverB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btSequentialImpulseConstraintSolverB:: btSequentialImpulseConstraintSolverB() {} 

btSequentialImpulseConstraintSolverB:: ~btSequentialImpulseConstraintSolverB() {

}

btSequentialImpulseConstraintSolverB* btSequentialImpulseConstraintSolverB::  create() { 
    btSequentialImpulseConstraintSolverB *wrapper = new btSequentialImpulseConstraintSolverB();
    btSequentialImpulseConstraintSolver *impl = new btSequentialImpulseConstraintSolver();
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
