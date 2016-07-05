#include "config.h"
#include "btCollisionObjectB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionObjectB:: btCollisionObjectB() {} 

btCollisionObjectB:: ~btCollisionObjectB() { 
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCollisionObject*) m_impl;
    }
    m_impl = NULL;

 }

void btCollisionObjectB:: setAnisotropicFriction(btVector3B* anisotropicFriction, long frictionMode) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->setAnisotropicFriction(*(btVector3*)(anisotropicFriction->getImpl()),frictionMode);
    setRef("anisotropicFriction", anisotropicFriction);
}

btCollisionShapeB* btCollisionObjectB:: getCollisionShape() {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    btCollisionShape* ret = impl->getCollisionShape();
    btCollisionShapeB* wrapper = (btCollisionShapeB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btCollisionShapeB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCollisionObjectB:: setContactProcessingThreshold(float contactProcessingThreshold) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->setContactProcessingThreshold(contactProcessingThreshold);
}

void btCollisionObjectB:: setActivationState(long newState) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->setActivationState(newState);
}

void btCollisionObjectB:: forceActivationState(long newState) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->forceActivationState(newState);
}

void btCollisionObjectB:: activate() { 
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->activate();
}

void btCollisionObjectB:: activate(bool forceActivation) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->activate(forceActivation);
}

bool btCollisionObjectB:: isActive() {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    return impl->isActive();
}

bool btCollisionObjectB:: isKinematicObject() {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    return impl->isKinematicObject();
}

void btCollisionObjectB:: setRestitution(float rest) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->setRestitution(rest);
}

void btCollisionObjectB:: setFriction(float frict) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->setFriction(frict);
}

void btCollisionObjectB:: setRollingFriction(float frict) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->setRollingFriction(frict);
}

btTransformB* btCollisionObjectB:: getWorldTransform() {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    btTransform* ret = &(impl->getWorldTransform());
    btTransformB* wrapper = (btTransformB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btTransformB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

long btCollisionObjectB:: getCollisionFlags() {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    return impl->getCollisionFlags();
}

void btCollisionObjectB:: setCollisionFlags(long flags) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->setCollisionFlags(flags);
}

void btCollisionObjectB:: setWorldTransform(btTransformB* worldTrans) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->setWorldTransform(*(btTransform*)(worldTrans->getImpl()));
    setRef("worldTrans", worldTrans);
}

void btCollisionObjectB:: setCollisionShape(btCollisionShapeB* collisionShape) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->setCollisionShape((btCollisionShape*)(collisionShape->getImpl()));
    setRef("collisionShape", collisionShape);
}

void btCollisionObjectB:: setCcdMotionThreshold(float ccdMotionThreshold) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->setCcdMotionThreshold(ccdMotionThreshold);
}

void btCollisionObjectB:: setCcdSweptSphereRadius(float radius) {
    btCollisionObject *impl = (btCollisionObject*) m_impl;
    impl->setCcdSweptSphereRadius(radius);
}

}
