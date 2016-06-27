#include "config.h"
#include "btGeneric6DofSpringConstraintB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btGeneric6DofSpringConstraintB:: btGeneric6DofSpringConstraintB() {} 

btGeneric6DofSpringConstraintB:: ~btGeneric6DofSpringConstraintB() {

 }

btGeneric6DofSpringConstraintB* btGeneric6DofSpringConstraintB::  create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* frameInA, btTransformB* frameInB, bool useLinearFrameReferenceFrameA) { 
    btGeneric6DofSpringConstraintB *wrapper = new btGeneric6DofSpringConstraintB();
    btGeneric6DofSpringConstraint *impl = new btGeneric6DofSpringConstraint(*(btRigidBody*)(rbA->getImpl()), *(btRigidBody*)(rbB->getImpl()), *(btTransform*)(frameInA->getImpl()), *(btTransform*)(frameInB->getImpl()), useLinearFrameReferenceFrameA);
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("frameInA", frameInA);
    wrapper->setRef("frameInB", frameInB);
    return wrapper;
}

btGeneric6DofSpringConstraintB* btGeneric6DofSpringConstraintB::  create(btRigidBodyB* rbB, btTransformB* frameInB, bool useLinearFrameReferenceFrameB) { 
    btGeneric6DofSpringConstraintB *wrapper = new btGeneric6DofSpringConstraintB();
    btGeneric6DofSpringConstraint *impl = new btGeneric6DofSpringConstraint(*(btRigidBody*)(rbB->getImpl()), *(btTransform*)(frameInB->getImpl()), useLinearFrameReferenceFrameB);
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("frameInB", frameInB);
    return wrapper;
}

void btGeneric6DofSpringConstraintB:: enableSpring(long index, bool onOff) {
    btGeneric6DofSpringConstraint *impl = (btGeneric6DofSpringConstraint*) m_impl;
    impl->enableSpring(index,onOff);
}

void btGeneric6DofSpringConstraintB:: setStiffness(long index, float stiffness) {
    btGeneric6DofSpringConstraint *impl = (btGeneric6DofSpringConstraint*) m_impl;
    impl->setStiffness(index,stiffness);
}

void btGeneric6DofSpringConstraintB:: setDamping(long index, float damping) {
    btGeneric6DofSpringConstraint *impl = (btGeneric6DofSpringConstraint*) m_impl;
    impl->setDamping(index,damping);
}

}
