#include "config.h"
#include "btRigidBodyB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btRigidBodyB:: btRigidBodyB() {} 

btRigidBodyB:: ~btRigidBodyB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btRigidBody*) m_impl;
    }
    m_impl = NULL;

}

btRigidBodyB* btRigidBodyB::  create(btRigidBodyConstructionInfoB* constructionInfo) { 
    btRigidBodyB *wrapper = new btRigidBodyB();
    btRigidBody *impl = new btRigidBody(*(btRigidBody::btRigidBodyConstructionInfo*)(constructionInfo->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("constructionInfo", constructionInfo);
    return wrapper;
}

btTransformB* btRigidBodyB:: getCenterOfMassTransform() {
    btRigidBody *impl = (btRigidBody*) m_impl;
    btTransform* ret = (btTransform*)(&(impl->getCenterOfMassTransform()));
    btTransformB* wrapper = (btTransformB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btTransformB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btRigidBodyB:: clearForces(){
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->clearForces();
}

void btRigidBodyB:: setCenterOfMassTransform(btTransformB* xform) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->setCenterOfMassTransform(*(btTransform*)(xform->getImpl()));
    setRef("centerOfMassTransform", xform);
}

void btRigidBodyB:: setSleepingThresholds(float linear, float angular) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->setSleepingThresholds(linear,angular);
}

void btRigidBodyB:: setDamping(float lin_damping, float ang_damping) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->setDamping(lin_damping,ang_damping);
}

void btRigidBodyB:: setMassProps(float mass, btVector3B* inertia) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->setMassProps(mass,*(btVector3*)(inertia->getImpl()));
    setRef("inertia", inertia);

}

void btRigidBodyB:: setLinearFactor(btVector3B* linearFactor) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->setLinearFactor(*(btVector3*)(linearFactor->getImpl()));
    setRef("linearFactor", linearFactor);
}

void btRigidBodyB:: applyTorque(btVector3B* torque) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->applyTorque(*(btVector3*)(torque->getImpl()));
}

/*
void btRigidBodyB:: applyLocalTorque(btVector3B* torque) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->applyLocalTorque(*(btVector3*)(torque->getImpl()));
}
*/

void btRigidBodyB:: applyForce(btVector3B* force, btVector3B* rel_pos) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->applyForce(*(btVector3*)(force->getImpl()),*(btVector3*)(rel_pos->getImpl()));
    
}

void btRigidBodyB:: applyCentralForce(btVector3B* force) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->applyCentralForce(*(btVector3*)(force->getImpl()));
}

/*
void btRigidBodyB:: applyCentralLocalForce(btVector3B* force) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->applyCentralLocalForce(*(btVector3*)(force->getImpl()));
}
*/

void btRigidBodyB:: applyTorqueImpulse(btVector3B* torque) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->applyTorqueImpulse(*(btVector3*)(torque->getImpl()));
}

void btRigidBodyB:: applyImpulse(btVector3B* impulse, btVector3B* rel_pos) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->applyImpulse(*(btVector3*)(impulse->getImpl()),*(btVector3*)(rel_pos->getImpl()));
}

void btRigidBodyB:: applyCentralImpulse(btVector3B* impulse) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->applyCentralImpulse(*(btVector3*)(impulse->getImpl()));
}

void btRigidBodyB:: updateInertiaTensor() {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->updateInertiaTensor();
}

btVector3B* btRigidBodyB:: getLinearVelocity() {
    btRigidBody *impl = (btRigidBody*) m_impl;
    btVector3* ret = (btVector3*) &(impl->getLinearVelocity());
    btVector3B* wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

btVector3B* btRigidBodyB:: getAngularVelocity() {
    btRigidBody *impl = (btRigidBody*) m_impl;
    btVector3* ret = (btVector3*) &(impl->getAngularVelocity());
    btVector3B* wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btRigidBodyB:: setLinearVelocity(btVector3B* lin_vel) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->setLinearVelocity(*(btVector3*)(lin_vel->getImpl()));
    setRef("linearVelocity", lin_vel);
}

void btRigidBodyB:: setAngularVelocity(btVector3B* ang_vel) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->setAngularVelocity(*(btVector3*)(ang_vel->getImpl()));
    setRef("angularVelocity", ang_vel);
}

btMotionStateB* btRigidBodyB:: getMotionState() {
    btRigidBody *impl = (btRigidBody*) m_impl;
    btMotionState* ret = impl->getMotionState();
    btMotionStateB* wrapper = (btMotionStateB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btMotionStateB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btRigidBodyB:: setMotionState(btMotionStateB* motionState) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->setMotionState((btMotionState*)(motionState->getImpl()));
    setRef("motionState", motionState);
}

void btRigidBodyB:: setAngularFactor(btVector3B* angularFactor) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    impl->setAngularFactor(*(btVector3*)(angularFactor->getImpl()));
    setRef("angularFactor", angularFactor);
}

btRigidBodyB* btRigidBodyB:: upcast(btCollisionObjectB* colObj) {
    btRigidBody *impl = (btRigidBody*) m_impl;
    btRigidBody* ret = impl->upcast((btCollisionObject*)(colObj->getImpl()));
    btRigidBodyB* wrapper = (btRigidBodyB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btRigidBodyB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
