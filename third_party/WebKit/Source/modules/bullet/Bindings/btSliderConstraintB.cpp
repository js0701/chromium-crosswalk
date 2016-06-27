#include "config.h"
#include "btSliderConstraintB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btSliderConstraintB:: btSliderConstraintB() {} 

btSliderConstraintB:: ~btSliderConstraintB() {

}

btSliderConstraintB* btSliderConstraintB::  create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* frameInA, btTransformB* frameInB, bool useLinearReferenceFrameA) { 
    btSliderConstraintB *wrapper = new btSliderConstraintB();
    btSliderConstraint *impl = new btSliderConstraint(*(btRigidBody*)(rbA->getImpl()), *(btRigidBody*)(rbB->getImpl()), *(btTransform*)(frameInA->getImpl()), *(btTransform*)(frameInB->getImpl()), useLinearReferenceFrameA);
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("frameInA", frameInA);
    wrapper->setRef("frameInB", frameInB);
    return wrapper;
}

btSliderConstraintB* btSliderConstraintB::  create(btRigidBodyB* rbB, btTransformB* frameInB, bool uesLinearReferenceFrameA) { 
    btSliderConstraintB *wrapper = new btSliderConstraintB();
    btSliderConstraint *impl = new btSliderConstraint(*(btRigidBody*)(rbB->getImpl()), *(btTransform*)(frameInB->getImpl()), uesLinearReferenceFrameA);
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("frameInB", frameInB);
    return wrapper;
}

void btSliderConstraintB:: setLowerLinLimit(float lowerLimit) {
    btSliderConstraint *impl = (btSliderConstraint*) m_impl;
    impl->setLowerLinLimit(lowerLimit);
}

void btSliderConstraintB:: setUpperLinLimit(float upperLimit) {
    btSliderConstraint *impl = (btSliderConstraint*) m_impl;
    impl->setUpperLinLimit(upperLimit);
}

void btSliderConstraintB:: setLowerAngLimit(float lowerAngLimit) {
    btSliderConstraint *impl = (btSliderConstraint*) m_impl;
    impl->setLowerAngLimit(lowerAngLimit);
}

void btSliderConstraintB:: setUpperAngLimit(float upperAngLimit) {
    btSliderConstraint *impl = (btSliderConstraint*) m_impl;
    impl->setUpperAngLimit(upperAngLimit);
}

}
