#include "config.h"
#include "btHingeConstraintB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btHingeConstraintB:: btHingeConstraintB() {} 

btHingeConstraintB:: ~btHingeConstraintB() {
  if(m_impl)
 {
  //m_impl->setWrapper(NULL);
  btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
  if(m_isOwner)
     delete (btHingeConstraint*) m_impl;
 }
 m_impl = NULL;

 }

btHingeConstraintB* btHingeConstraintB::  create(btRigidBodyB* rbA, btRigidBodyB* rbB, btVector3B* pivotInA, btVector3B* pivotInB, btVector3B* axisInA, btVector3B* axisInB) { 
    btHingeConstraintB *wrapper = new btHingeConstraintB();
    btHingeConstraint *impl = new btHingeConstraint(*(btRigidBody*)(rbA->getImpl()), *(btRigidBody*)(rbB->getImpl()), *(btVector3*)(pivotInA->getImpl()), *(btVector3*)(pivotInB->getImpl()), *(btVector3*)(axisInA->getImpl()), *(btVector3*)(axisInB->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("pivotInA", pivotInA);
    wrapper->setRef("pivotInB", pivotInB);
    wrapper->setRef("axisInA", axisInA);
    wrapper->setRef("axisInB", axisInB);
    return wrapper;
}

btHingeConstraintB* btHingeConstraintB::  create(btRigidBodyB* rbA, btRigidBodyB* rbB, btVector3B* pivotInA, btVector3B* pivotInB, btVector3B* axisInA, btVector3B* axisInB, bool useReferenceFrameA) { 
    btHingeConstraintB *wrapper = new btHingeConstraintB();
    btHingeConstraint *impl = new btHingeConstraint(*(btRigidBody*)(rbA->getImpl()), *(btRigidBody*)(rbB->getImpl()), *(btVector3*)(pivotInA->getImpl()), *(btVector3*)(pivotInB->getImpl()), *(btVector3*)(axisInA->getImpl()), *(btVector3*)(axisInB->getImpl()), useReferenceFrameA);
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("pivotInA", pivotInA);
    wrapper->setRef("pivotInB",pivotInB);
    wrapper->setRef("axisInA", axisInA);
    wrapper->setRef("axisInB", axisInB);
    return wrapper;
}

btHingeConstraintB* btHingeConstraintB::  create(btRigidBodyB* rbA, btVector3B* pivotInA, btVector3B* axisInA) { 
    btHingeConstraintB *wrapper = new btHingeConstraintB();
    btHingeConstraint *impl = new btHingeConstraint(*(btRigidBody*)(rbA->getImpl()), *(btVector3*)(pivotInA->getImpl()), *(btVector3*)(axisInA->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("pivotInA", pivotInA);
    wrapper->setRef("axisInA",axisInA);
    return wrapper;
}

btHingeConstraintB* btHingeConstraintB::  create(btRigidBodyB* rbA, btVector3B* pivotInA, btVector3B* axisInA, bool useReferenceFrameA) { 
    btHingeConstraintB *wrapper = new btHingeConstraintB();
    btHingeConstraint *impl = new btHingeConstraint(*(btRigidBody*)(rbA->getImpl()), *(btVector3*)(pivotInA->getImpl()), *(btVector3*)(axisInA->getImpl()), useReferenceFrameA);
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("pivotInA", pivotInA);
    wrapper->setRef("axisInA", axisInA);
    return wrapper;
}

btHingeConstraintB* btHingeConstraintB::  create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* rbAFrame, btTransformB* rbBFrame) { 
    btHingeConstraintB *wrapper = new btHingeConstraintB();
    btHingeConstraint *impl = new btHingeConstraint(*(btRigidBody*)(rbA->getImpl()), *(btRigidBody*)(rbB->getImpl()), *(btTransform*)(rbAFrame->getImpl()), *(btTransform*)(rbBFrame->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("rbAFrame", rbAFrame);
    wrapper->setRef("rbBFrame", rbBFrame);
    return wrapper;
}

btHingeConstraintB* btHingeConstraintB::  create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* rbAFrame, btTransformB* rbBFrame, bool useReferenceFrameA) { 
    btHingeConstraintB *wrapper = new btHingeConstraintB();
    btHingeConstraint *impl = new btHingeConstraint(*(btRigidBody*)(rbA->getImpl()), *(btRigidBody*)(rbB->getImpl()), *(btTransform*)(rbAFrame->getImpl()), *(btTransform*)(rbBFrame->getImpl()), useReferenceFrameA);
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("rbAFrame", rbAFrame);
    wrapper->setRef("rbBFrame", rbBFrame);
    return wrapper;
}

btHingeConstraintB* btHingeConstraintB::  create(btRigidBodyB* rbA, btTransformB* rbAFrame) { 
    btHingeConstraintB *wrapper = new btHingeConstraintB();
    btHingeConstraint *impl = new btHingeConstraint(*(btRigidBody*)(rbA->getImpl()), *(btTransform*)(rbAFrame->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("rbAFrame", rbAFrame);
    return wrapper;
}

btHingeConstraintB* btHingeConstraintB::  create(btRigidBodyB* rbA, btTransformB* rbAFrame, bool useReferenceFrameA) { 
    btHingeConstraintB *wrapper = new btHingeConstraintB();
    btHingeConstraint *impl = new btHingeConstraint(*(btRigidBody*)(rbA->getImpl()), *(btTransform*)(rbAFrame->getImpl()), useReferenceFrameA);
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("rbAFrame", rbAFrame);
    return wrapper;
}

void btHingeConstraintB:: setLimit(float low, float high, float softness, float biasFactor) { 
    btHingeConstraint *impl = (btHingeConstraint*) m_impl;
    impl->setLimit(low,high,softness,biasFactor);
}

void btHingeConstraintB:: setLimit(float low, float high, float softness, float biasFactor, float relaxationFactor) {
    btHingeConstraint *impl = (btHingeConstraint*) m_impl;
    impl->setLimit(low,high,softness,biasFactor,relaxationFactor);
}

void btHingeConstraintB:: enableAngularMotor(bool enableMotor, float targetVelocity, float maxMotorImpulse) {
    btHingeConstraint *impl = (btHingeConstraint*) m_impl;
    impl->enableAngularMotor(enableMotor,targetVelocity,maxMotorImpulse);
}

}
