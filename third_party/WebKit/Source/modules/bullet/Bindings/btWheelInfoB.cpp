#include "config.h"
#include "btWheelInfoB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btWheelInfoB:: btWheelInfoB() {} 

btWheelInfoB:: ~btWheelInfoB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btWheelInfo*) m_impl;
    }
    m_impl = NULL;
 }

void btWheelInfoB::  set_m_suspensionStiffness(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_suspensionStiffness = value;
}

float btWheelInfoB:: m_suspensionStiffness(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_suspensionStiffness;
}

void btWheelInfoB::  set_m_frictionSlip(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_frictionSlip = value;
}

float btWheelInfoB:: m_frictionSlip(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_frictionSlip;
}

void btWheelInfoB::  set_m_engineForce(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_engineForce = value;
}

float btWheelInfoB:: m_engineForce(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_engineForce;
}

void btWheelInfoB::  set_m_rollInfluence(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_rollInfluence = value;
}

float btWheelInfoB:: m_rollInfluence(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_rollInfluence;
}

void btWheelInfoB::  set_m_suspensionRestLength1(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_suspensionRestLength1 = value;
}

float btWheelInfoB:: m_suspensionRestLength1(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_suspensionRestLength1;
}

void btWheelInfoB::  set_m_wheelsRadius(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_wheelsRadius = value;
}

float btWheelInfoB:: m_wheelsRadius(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_wheelsRadius;
}

void btWheelInfoB::  set_m_wheelsDampingCompression(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_wheelsDampingCompression = value;
}

float btWheelInfoB:: m_wheelsDampingCompression(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_wheelsDampingCompression;
}

void btWheelInfoB::  set_m_wheelsDampingRelaxation(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_wheelsDampingRelaxation = value;
}

float btWheelInfoB:: m_wheelsDampingRelaxation(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_wheelsDampingRelaxation;
}

void btWheelInfoB::  set_m_steering(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_steering = value;
}

float btWheelInfoB:: m_steering(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_steering;
}

void btWheelInfoB::  set_m_maxSuspensionForce(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_maxSuspensionForce = value;
}

float btWheelInfoB:: m_maxSuspensionForce(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_maxSuspensionForce;
}

void btWheelInfoB::  set_m_maxSuspensionTravelCm(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_maxSuspensionTravelCm = value;
}

float btWheelInfoB:: m_maxSuspensionTravelCm(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_maxSuspensionTravelCm;
}

void btWheelInfoB::  set_m_wheelsSuspensionForce(float value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_wheelsSuspensionForce = value;
}

float btWheelInfoB:: m_wheelsSuspensionForce(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_wheelsSuspensionForce;
}

void btWheelInfoB::  set_m_bIsFrontWheel(bool value ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    impl->m_bIsFrontWheel = value;
}

bool btWheelInfoB:: m_bIsFrontWheel(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    return impl->m_bIsFrontWheel;
}

void btWheelInfoB::  set_m_raycastInfo(btWheelInfoRaycastInfoB* raycastInfo ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    btWheelInfo::RaycastInfo* ret = (btWheelInfo::RaycastInfo*)(raycastInfo->getImpl());
    impl->m_raycastInfo = *ret;
    setRef("raycastInfo", raycastInfo);
}

btWheelInfoRaycastInfoB* btWheelInfoB:: m_raycastInfo(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    btWheelInfo::RaycastInfo* ret = &(impl->m_raycastInfo);
    btWheelInfoRaycastInfoB *wrapper = (btWheelInfoRaycastInfoB*)btBlinkWrapperRepo::getWrapperForImpl(ret); 
    if(wrapper == NULL) {
        wrapper = new btWheelInfoRaycastInfoB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btWheelInfoB::  set_m_chassisConnectionPointCS(btVector3B* point ) {
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    btVector3* ret = (btVector3*)(point->getImpl());
    impl->m_chassisConnectionPointCS = *ret;
    setRef("chassisConnectionPointCS", point);
}

btVector3B* btWheelInfoB:: m_chassisConnectionPointCS(){
    btWheelInfo *impl = (btWheelInfo*) m_impl;
    btVector3* ret = &(impl->m_chassisConnectionPointCS);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret); 
    if(wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
