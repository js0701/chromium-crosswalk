#include "config.h"
#include "btGeneric6DofConstraintB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btGeneric6DofConstraintB:: btGeneric6DofConstraintB() {} 

btGeneric6DofConstraintB:: ~btGeneric6DofConstraintB() {

 }

btGeneric6DofConstraintB* btGeneric6DofConstraintB::  create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* frameInA, btTransformB* frameInB, bool useLinearFrameReferenceFrameA) { 
    btGeneric6DofConstraintB *wrapper = new btGeneric6DofConstraintB();
    btGeneric6DofConstraint *impl = new btGeneric6DofConstraint(*(btRigidBody*)(rbA->getImpl()), *(btRigidBody*)(rbB->getImpl()), *(btTransform*)(frameInA->getImpl()), *(btTransform*)(frameInB->getImpl()), useLinearFrameReferenceFrameA);
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("frameInA", frameInA);
    wrapper->setRef("frameInB", frameInB);
    return wrapper;
}

btGeneric6DofConstraintB* btGeneric6DofConstraintB::  create(btRigidBodyB* rbB, btTransformB* frameInB, bool useLinearFrameReferenceFrameB) { 
    btGeneric6DofConstraintB *wrapper = new btGeneric6DofConstraintB();
    btGeneric6DofConstraint *impl = new btGeneric6DofConstraint(*(btRigidBody*)(rbB->getImpl()), *(btTransform*)(frameInB->getImpl()), useLinearFrameReferenceFrameB);
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("frameInB", frameInB);
    return wrapper;
}

void btGeneric6DofConstraintB:: setLinearLowerLimit(btVector3B* linearLower) {
    btGeneric6DofConstraint *impl = (btGeneric6DofConstraint*) m_impl;
    impl->setLinearLowerLimit(*(btVector3*)(linearLower->getImpl()));
    setRef("linearLower", linearLower);
}

void btGeneric6DofConstraintB:: setLinearUpperLimit(btVector3B* linearUpper) {
    btGeneric6DofConstraint *impl = (btGeneric6DofConstraint*) m_impl;
    impl->setLinearUpperLimit(*(btVector3*)(linearUpper->getImpl()));
    setRef("linearUpper", linearUpper);
}

void btGeneric6DofConstraintB:: setAngularLowerLimit(btVector3B* angularLower) {
    btGeneric6DofConstraint *impl = (btGeneric6DofConstraint*) m_impl;
    impl->setAngularLowerLimit(*(btVector3*)(angularLower->getImpl()));
    setRef("angularLower",angularLower);
}

void btGeneric6DofConstraintB:: setAngularUpperLimit(btVector3B* angularUpper) {
    btGeneric6DofConstraint *impl = (btGeneric6DofConstraint*) m_impl;
    impl->setAngularUpperLimit(*(btVector3*)(angularUpper->getImpl()));
    setRef("angularUpper",angularUpper);
}

}
