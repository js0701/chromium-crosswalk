#include "config.h"
#include "btRaycastVehicleB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btRaycastVehicleB:: btRaycastVehicleB() {} 

btRaycastVehicleB:: ~btRaycastVehicleB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btRaycastVehicle*) m_impl;
    }
    m_impl = NULL;

 }

btRaycastVehicleB* btRaycastVehicleB::  create(btVehicleTuningB* tuning, btRigidBodyB* chassis, btVehicleRaycasterB* raycaster) { 
    btRaycastVehicleB *wrapper = new btRaycastVehicleB();
    btRaycastVehicle *impl = new btRaycastVehicle(*(const btRaycastVehicle::btVehicleTuning*)(tuning->getImpl()), (btRigidBody*)(chassis->getImpl()), (btVehicleRaycaster*)(raycaster->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("tuning", tuning);
    wrapper->setRef("chassis", chassis);
    wrapper->setRef("raycaster", raycaster);
    return wrapper;
}
/*
btRaycastVehicleB* btRaycastVehicleB::  create(float force, long wheel) { 
    btRaycastVehicleB *wrapper = new btRaycastVehicleB();
    btRaycastVehicle *impl = new btRaycastVehicle(force, wheel);
    wrapper->setImpl(impl);
    return wrapper;
}
*/

void btRaycastVehicleB:: applyEngineForce(float force, long wheel) {
    btRaycastVehicle *impl = (btRaycastVehicle*) m_impl;
    impl->applyEngineForce(force,wheel);
}

void btRaycastVehicleB:: setSteeringValue(float steering, long wheel) {
    btRaycastVehicle *impl = (btRaycastVehicle*) m_impl;
    impl->setSteeringValue(steering,wheel);
}

btTransformB* btRaycastVehicleB:: getWheelTransformWS(long wheelIndex) {
    btRaycastVehicle *impl = (btRaycastVehicle*) m_impl;
    btTransform* ret = (btTransform*) (&(impl->getWheelTransformWS(wheelIndex)));
    btTransformB* wrapper = (btTransformB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btTransformB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btRaycastVehicleB:: updateWheelTransform(long wheelIndex, bool interpolatedTransform) {
    btRaycastVehicle *impl = (btRaycastVehicle*) m_impl;
    impl->updateWheelTransform(wheelIndex,interpolatedTransform);
}

btWheelInfoB* btRaycastVehicleB:: addWheel(btVector3B* connectionPointCS0, btVector3B* wheelDirectionCS0, btVector3B* wheelAxleCS,
                                              float suspensionRestLength, float wheelRadius, btVehicleTuningB* tuning, bool isFrontWheel) {
    btRaycastVehicle *impl = (btRaycastVehicle*) m_impl;
    btWheelInfo* ret = &(impl->addWheel(*(btVector3*)(connectionPointCS0->getImpl()),*(btVector3*)(wheelDirectionCS0->getImpl()), *(btVector3*)(wheelAxleCS->getImpl()),suspensionRestLength,wheelRadius,
                                                    *(const btRaycastVehicle::btVehicleTuning*)(tuning->getImpl()),isFrontWheel));
    btWheelInfoB* wrapper = (btWheelInfoB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btWheelInfoB();
        wrapper->setImpl(ret, false);
    }

    setRef(connectionPointCS0);
    setRef(wheelDirectionCS0);
    setRef(wheelAxleCS);
    setRef(tuning);
    
    return wrapper;
}

long btRaycastVehicleB:: getNumWheels() {
    btRaycastVehicle *impl = (btRaycastVehicle*) m_impl;
    return impl->getNumWheels();
}

btRigidBodyB* btRaycastVehicleB:: getRigidBody() {
    btRaycastVehicle *impl = (btRaycastVehicle*) m_impl;
    btRigidBody* ret = impl->getRigidBody();
    btRigidBodyB* wrapper = (btRigidBodyB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btRigidBodyB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

btWheelInfoB* btRaycastVehicleB:: getWheelInfo(long index) {
    btRaycastVehicle *impl = (btRaycastVehicle*) m_impl;
    btWheelInfo* ret = &(impl->getWheelInfo(index));
    btWheelInfoB* wrapper = (btWheelInfoB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btWheelInfoB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btRaycastVehicleB:: setBrake(float brake, long wheelIndex) {
    btRaycastVehicle *impl = (btRaycastVehicle*) m_impl;
    impl->setBrake(brake,wheelIndex);
}

void btRaycastVehicleB:: setCoordinateSystem(long rightIndex, long upIndex, long forwardIndex) {
    btRaycastVehicle *impl = (btRaycastVehicle*) m_impl;
    impl->setCoordinateSystem(rightIndex,upIndex,forwardIndex);
}

float btRaycastVehicleB:: getCurrentSpeedKmHour() {
    btRaycastVehicle *impl = (btRaycastVehicle*) m_impl;
    return impl->getCurrentSpeedKmHour();
}

}
