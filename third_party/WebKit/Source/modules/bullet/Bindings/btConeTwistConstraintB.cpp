#include "config.h"
#include "btConeTwistConstraintB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConeTwistConstraintB:: btConeTwistConstraintB() {} 

btConeTwistConstraintB:: ~btConeTwistConstraintB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btConeTwistConstraint*) m_impl;
    }
    m_impl = NULL;

 }

btConeTwistConstraintB* btConeTwistConstraintB::  create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* rbAFrame, btTransformB* rbBFrame) { 
    btConeTwistConstraintB *wrapper = new btConeTwistConstraintB();
    btConeTwistConstraint *impl = new btConeTwistConstraint(*(btRigidBody*)(rbA->getImpl()), *(btRigidBody*)(rbB->getImpl()), *(btTransform*)(rbAFrame->getImpl()), *(btTransform*)(rbBFrame->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("rbAFrame", rbAFrame);
    wrapper->setRef("rbBFrame", rbBFrame);
    return wrapper;
}

btConeTwistConstraintB* btConeTwistConstraintB::  create(btRigidBodyB* rbA, btTransformB* rbAFrame) { 
    btConeTwistConstraintB *wrapper = new btConeTwistConstraintB();
    btConeTwistConstraint *impl = new btConeTwistConstraint(*(btRigidBody*)(rbA->getImpl()), *(btTransform*)(rbAFrame->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("rbAFrame", rbAFrame);
    return wrapper;
}

void btConeTwistConstraintB:: setLimit(long limitIndex, float limitValue) {
    btConeTwistConstraint *impl = (btConeTwistConstraint*) m_impl;
    impl->setLimit(limitIndex,limitValue);
}

void btConeTwistConstraintB:: setAngularOnly(bool angularOnly) {
    btConeTwistConstraint *impl = (btConeTwistConstraint*) m_impl;
    impl->setAngularOnly(angularOnly);
}

void btConeTwistConstraintB:: setDamping(float damping) {
    btConeTwistConstraint *impl = (btConeTwistConstraint*) m_impl;
    impl->setDamping(damping);
}

void btConeTwistConstraintB:: enableMotor(bool b) {
    btConeTwistConstraint *impl = (btConeTwistConstraint*) m_impl;
    impl->enableMotor(b);
}

void btConeTwistConstraintB:: setMaxMotorImpulse(float maxMotorImpulse) {
    btConeTwistConstraint *impl = (btConeTwistConstraint*) m_impl;
    impl->setMaxMotorImpulse(maxMotorImpulse);
}

void btConeTwistConstraintB:: setMaxMotorImpulseNormalized(float maxMotorImpulse) {
    btConeTwistConstraint *impl = (btConeTwistConstraint*) m_impl;
    impl->setMaxMotorImpulseNormalized(maxMotorImpulse);
}

void btConeTwistConstraintB:: setMotorTarget(btQuaternionB* q) {
    btConeTwistConstraint *impl = (btConeTwistConstraint*) m_impl;
    impl->setMotorTarget(*(btQuaternion*)(q->getImpl()));
    setRef("motorTarget", q);
}

void btConeTwistConstraintB:: setMotorTargetInConstraintSpace(btQuaternionB* q) {
    btConeTwistConstraint *impl = (btConeTwistConstraint*) m_impl;
    impl->setMotorTargetInConstraintSpace(*(btQuaternion*)(q->getImpl()));
    setRef("motorTargetInConstraintSpace", q);
}

}
