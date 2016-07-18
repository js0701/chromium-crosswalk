#include "config.h"
#include "btVehicleTuningB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btVehicleTuningB:: btVehicleTuningB() {} 

btVehicleTuningB:: ~btVehicleTuningB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btRaycastVehicle::btVehicleTuning*) m_impl;
    }
    m_impl = NULL;

}

btVehicleTuningB* btVehicleTuningB::  create() { 
    btVehicleTuningB *wrapper = new btVehicleTuningB();
    btRaycastVehicle::btVehicleTuning *impl = new btRaycastVehicle::btVehicleTuning();
    wrapper->setImpl(impl, true);
    return wrapper;
}

void btVehicleTuningB::  set_m_suspensionStiffness(float value ) {
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    impl->m_suspensionStiffness = value;
}

float btVehicleTuningB:: m_suspensionStiffness(){
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    return impl->m_suspensionStiffness;
}

void btVehicleTuningB::  set_m_suspensionCompression(float value ) {
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    impl->m_suspensionCompression = value;
}

float btVehicleTuningB:: m_suspensionCompression(){
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    return impl->m_suspensionCompression;
}

void btVehicleTuningB::  set_m_suspensionDamping(float value ) {
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    impl->m_suspensionDamping = value;
}

float btVehicleTuningB:: m_suspensionDamping(){
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    return impl->m_suspensionDamping;
}

void btVehicleTuningB::  set_m_maxSuspensionTravelCm(float value ) {
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    impl->m_maxSuspensionTravelCm = value;
}

float btVehicleTuningB:: m_maxSuspensionTravelCm(){
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    return impl->m_maxSuspensionTravelCm;
}

void btVehicleTuningB::  set_m_frictionSlip(float value ) {
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    impl->m_frictionSlip = value;
}

float btVehicleTuningB:: m_frictionSlip(){
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    return impl->m_frictionSlip;
}

void btVehicleTuningB::  set_m_maxSuspensionForce(float value ) {
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    impl->m_maxSuspensionForce = value;
}

float btVehicleTuningB:: m_maxSuspensionForce(){
    btRaycastVehicle::btVehicleTuning *impl = (btRaycastVehicle::btVehicleTuning*) m_impl;
    return impl->m_maxSuspensionForce;
}

}
