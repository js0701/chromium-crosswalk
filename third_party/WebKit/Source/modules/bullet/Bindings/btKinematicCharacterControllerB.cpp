#include "config.h"
#include "btKinematicCharacterControllerB.h"
#include "../btBulletDynamicsCommon.h"
#include "../BulletDynamics/Character/btKinematicCharacterController.h"
#include "../BulletCollision/CollisionDispatch/btGhostObject.h"


namespace blink {
btKinematicCharacterControllerB:: btKinematicCharacterControllerB() {} 

btKinematicCharacterControllerB:: ~btKinematicCharacterControllerB() {
 }

/*
btKinematicCharacterControllerB* btKinematicCharacterControllerB::  create() { 
    btKinematicCharacterControllerB *wrapper = new btKinematicCharacterControllerB();
    btKinematicCharacterController *impl = new btKinematicCharacterController();
    wrapper->setImpl(impl);
    return wrapper;
}
*/

btKinematicCharacterControllerB* btKinematicCharacterControllerB::  create(btPairCachingGhostObjectB* ghostObject, btConvexShapeB* convexShape, float stepHeight) { 
    btKinematicCharacterControllerB *wrapper = new btKinematicCharacterControllerB();
    btKinematicCharacterController *impl = new btKinematicCharacterController((btPairCachingGhostObject*)(ghostObject->getImpl()), (btConvexShape*)(convexShape->getImpl()), stepHeight);
    wrapper->setImpl(impl, true);
    wrapper->setRef("ghostObject", ghostObject);
    wrapper->setRef("convexShape", convexShape);
    return wrapper;
}

btKinematicCharacterControllerB* btKinematicCharacterControllerB::  create(btPairCachingGhostObjectB* ghostObject, btConvexShapeB* convexShape, float stepHeight, long upAxis) { 
    btKinematicCharacterControllerB *wrapper = new btKinematicCharacterControllerB();
    btKinematicCharacterController *impl = new btKinematicCharacterController((btPairCachingGhostObject*)(ghostObject->getImpl()), (btConvexShape*)(convexShape->getImpl()), stepHeight, upAxis);
    wrapper->setImpl(impl, true);
    wrapper->setRef("ghostObject", ghostObject);
    wrapper->setRef("convexShape", convexShape);
    return wrapper;
}

void btKinematicCharacterControllerB:: setUpAxis(long axis) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->setUpAxis(axis);
}

void btKinematicCharacterControllerB:: setWalkDirection(btVector3B* walkDirection) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->setWalkDirection(*(btVector3*)(walkDirection->getImpl()));
    setRef("walkDirection",walkDirection);
}

void btKinematicCharacterControllerB:: setVelocityForTimeInterval(btVector3B* velocity, float timeInterval) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->setVelocityForTimeInterval(*(btVector3*)(velocity->getImpl()),timeInterval);
    setRef("velocity", velocity);
}

void btKinematicCharacterControllerB:: warp(btVector3B* origin) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->warp(*(btVector3*)(origin->getImpl()));
    setRef("origin", origin);
}

void btKinematicCharacterControllerB:: preStep(btCollisionWorldB* collisionWorld) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->preStep((btCollisionWorld*)(collisionWorld->getImpl()));
}

void btKinematicCharacterControllerB:: playerStep(btCollisionWorldB* collisionWorld, float dt) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->playerStep((btCollisionWorld*)(collisionWorld->getImpl()),dt);
}

void btKinematicCharacterControllerB:: setFallSpeed(float fallSpeed) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->setFallSpeed(fallSpeed);
}

void btKinematicCharacterControllerB:: setJumpSpeed(float jumpSpeed) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->setJumpSpeed(jumpSpeed);
}

void btKinematicCharacterControllerB:: setMaxJumpHeight(float maxJumpHeight) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->setMaxJumpHeight(maxJumpHeight);
}

bool btKinematicCharacterControllerB:: canJump() {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    return impl->canJump();
}

void btKinematicCharacterControllerB:: jump() {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->jump();
}

void btKinematicCharacterControllerB:: setGravity(float gravity) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->setGravity(gravity);
}

float btKinematicCharacterControllerB:: getGravity() {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    return impl->getGravity();
}

void btKinematicCharacterControllerB:: setMaxSlope(float slopeRadians) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->setMaxSlope(slopeRadians);
}

float btKinematicCharacterControllerB:: getMaxSlope() {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    return impl->getMaxSlope();
}

btPairCachingGhostObjectB* btKinematicCharacterControllerB:: getGhostObject() {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    btPairCachingGhostObject* ret = impl->getGhostObject();
    btPairCachingGhostObjectB *wrapper = (btPairCachingGhostObjectB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btPairCachingGhostObjectB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btKinematicCharacterControllerB:: setUseGhostSweepTest(bool useGhostObjectSweepTest) {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    impl->setUseGhostSweepTest(useGhostObjectSweepTest);
}

bool btKinematicCharacterControllerB:: onGround() {
    btKinematicCharacterController *impl = (btKinematicCharacterController*) m_impl;
    return impl->onGround();
}

}
