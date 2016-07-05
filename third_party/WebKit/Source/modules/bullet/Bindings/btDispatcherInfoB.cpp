#include "config.h"
#include "btDispatcherInfoB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDispatcherInfoB:: btDispatcherInfoB() {} 

btDispatcherInfoB:: ~btDispatcherInfoB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btDispatcherInfo*) m_impl;
    }
    m_impl = NULL;

}

void btDispatcherInfoB::  setM_timeStep(float value ) {
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    impl->m_timeStep = value;
}

float btDispatcherInfoB:: m_timeStep(){
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    return impl->m_timeStep;
}

void btDispatcherInfoB::  setM_stepCount(long value ) {
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    impl->m_stepCount = value;
}

long btDispatcherInfoB:: m_stepCount(){
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    return impl->m_stepCount;
}

void btDispatcherInfoB::  setM_dispatchFunc(long value ) {
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    impl->m_dispatchFunc = value;
}

long btDispatcherInfoB:: m_dispatchFunc(){
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    return impl->m_dispatchFunc;
}

void btDispatcherInfoB::  setM_timeOfImpact(float value ) {
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    impl->m_timeOfImpact = value;
}

float btDispatcherInfoB:: m_timeOfImpact(){
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    return impl->m_timeOfImpact;
}

void btDispatcherInfoB::  setM_useContinuous(bool value ) {
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    impl->m_useContinuous = value;
}

bool btDispatcherInfoB:: m_useContinuous(){
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    return impl->m_useContinuous;
}

void btDispatcherInfoB::  setM_enableSatConvex(bool value ) {
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    impl->m_enableSatConvex = value;
}

bool btDispatcherInfoB:: m_enableSatConvex(){
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    return impl->m_enableSatConvex;
}

void btDispatcherInfoB::  setM_enableSPU(bool value ) {
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    impl->m_enableSPU = value;
}

bool btDispatcherInfoB:: m_enableSPU(){
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    return impl->m_enableSPU;
}

void btDispatcherInfoB::  setM_useEpa(bool value ) {
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    impl->m_useEpa = value;
}

bool btDispatcherInfoB:: m_useEpa(){
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    return impl->m_useEpa;
}

void btDispatcherInfoB::  setM_allowedCcdPenetration(float value ) {
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    impl->m_allowedCcdPenetration = value;
}

float btDispatcherInfoB:: m_allowedCcdPenetration(){
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    return impl->m_allowedCcdPenetration;
}

void btDispatcherInfoB::  setM_useConvexConservativeDistanceUtil(bool value ) {
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    impl->m_useConvexConservativeDistanceUtil = value;
}

bool btDispatcherInfoB:: m_useConvexConservativeDistanceUtil(){
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    return impl->m_useConvexConservativeDistanceUtil;
}

void btDispatcherInfoB::  setM_convexConservativeDistanceThreshold(float value ) {
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    impl->m_convexConservativeDistanceThreshold = value;
}

float btDispatcherInfoB:: m_convexConservativeDistanceThreshold(){
    btDispatcherInfo *impl = (btDispatcherInfo*) m_impl;
    return impl->m_convexConservativeDistanceThreshold;
}

}
