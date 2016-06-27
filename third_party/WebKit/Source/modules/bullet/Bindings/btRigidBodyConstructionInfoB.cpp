#include "config.h"
#include "btRigidBodyConstructionInfoB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btRigidBodyConstructionInfoB:: btRigidBodyConstructionInfoB() {} 

btRigidBodyConstructionInfoB:: ~btRigidBodyConstructionInfoB() {

}

btRigidBodyConstructionInfoB* btRigidBodyConstructionInfoB::  create(float mass, btMotionStateB* motionState, btCollisionShapeB* collisionShape) { 
    btRigidBodyConstructionInfoB *wrapper = new btRigidBodyConstructionInfoB();
    btRigidBody::btRigidBodyConstructionInfo *impl = new btRigidBody::btRigidBodyConstructionInfo(mass, (btMotionState*)(motionState->getImpl()), (btCollisionShape*)(collisionShape->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("motionState", motionState);
    wrapper->setRef("collisionShape",collisionShape);
    return wrapper;
}

btRigidBodyConstructionInfoB* btRigidBodyConstructionInfoB::  create(float mass, btMotionStateB* motionState, btCollisionShapeB* collisionShape, btVector3B* localInertia) { 
    btRigidBodyConstructionInfoB *wrapper = new btRigidBodyConstructionInfoB();
    btRigidBody::btRigidBodyConstructionInfo *impl = new btRigidBody::btRigidBodyConstructionInfo(mass, (btMotionState*)(motionState->getImpl()), 
                                                    (btCollisionShape*)(collisionShape->getImpl()), *(const btVector3*)(localInertia->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("motionState",motionState);
    wrapper->setRef("collisionShape",collisionShape);
    wrapper->setRef("localInertia",localInertia);
    return wrapper;
}

void btRigidBodyConstructionInfoB::  setM_linearDamping(float value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_linearDamping = value;
}

float btRigidBodyConstructionInfoB:: m_linearDamping(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_linearDamping;
}

void btRigidBodyConstructionInfoB::  setM_angularDamping(float value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_angularDamping = value;
}

float btRigidBodyConstructionInfoB:: m_angularDamping(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_angularDamping;
}

void btRigidBodyConstructionInfoB::  setM_friction(float value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_friction = value;
}

float btRigidBodyConstructionInfoB:: m_friction(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_friction;
}

void btRigidBodyConstructionInfoB::  setM_rollingFriction(float value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_rollingFriction = value;
}

float btRigidBodyConstructionInfoB:: m_rollingFriction(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_rollingFriction;
}

void btRigidBodyConstructionInfoB::  setM_restitution(float value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_restitution = value;
}

float btRigidBodyConstructionInfoB:: m_restitution(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_restitution;
}

void btRigidBodyConstructionInfoB::  setM_linearSleepingThreshold(float value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_linearSleepingThreshold = value;
}

float btRigidBodyConstructionInfoB:: m_linearSleepingThreshold(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_linearSleepingThreshold;
}

void btRigidBodyConstructionInfoB::  setM_angularSleepingThreshold(float value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_angularSleepingThreshold = value;
}

float btRigidBodyConstructionInfoB:: m_angularSleepingThreshold(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_angularSleepingThreshold;
}

void btRigidBodyConstructionInfoB::  setM_additionalDamping(bool value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_additionalDamping = value;
}

bool btRigidBodyConstructionInfoB:: m_additionalDamping(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_additionalDamping;
}

void btRigidBodyConstructionInfoB::  setM_additionalDampingFactor(float value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_additionalDampingFactor = value;
}

float btRigidBodyConstructionInfoB:: m_additionalDampingFactor(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_additionalDampingFactor;
}

void btRigidBodyConstructionInfoB::  setM_additionalLinearDampingThresholdSqr(float value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_additionalLinearDampingThresholdSqr = value;
}

float btRigidBodyConstructionInfoB:: m_additionalLinearDampingThresholdSqr(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_additionalLinearDampingThresholdSqr;
}

void btRigidBodyConstructionInfoB::  setM_additionalAngularDampingThresholdSqr(float value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_additionalAngularDampingThresholdSqr = value;
}

float btRigidBodyConstructionInfoB:: m_additionalAngularDampingThresholdSqr(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_additionalAngularDampingThresholdSqr;
}

void btRigidBodyConstructionInfoB::  setM_additionalAngularDampingFactor(float value ) {
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    impl->m_additionalAngularDampingFactor = value;
}

float btRigidBodyConstructionInfoB:: m_additionalAngularDampingFactor(){
    btRigidBody::btRigidBodyConstructionInfo *impl = (btRigidBody::btRigidBodyConstructionInfo*) m_impl;
    return impl->m_additionalAngularDampingFactor;
}

}
