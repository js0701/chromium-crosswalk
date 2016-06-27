#include "config.h"
#include "btWheelInfoRaycastInfo.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btWheelInfoRaycastInfo:: btWheelInfoRaycastInfo() {} 

btWheelInfoRaycastInfo:: ~btWheelInfoRaycastInfo() { 
if(m_impl != null) delete (btWheelInfoRaycastInf*) m_impl;
 }

void btWheelInfoRaycastInfo::  setM_contactNormalWS(btVector3B* value ) {
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_contactNormalWS = ret;
    setRef("contactNormalWS", value);
}

btVector3B* btWheelInfoRaycastInfo:: m_contactNormalWS(){
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    btVector3* ret = impl->m_contactNormalWS;
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btWheelInfoRaycastInfo::  setM_contactPointWS(btVector3B* value ) {
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_contactPointWS = ret;
    setRef("contactPointWS",value);
}

btVector3B* btWheelInfoRaycastInfo:: m_contactPointWS(){
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    btVector3* ret = impl->m_contactPointWS;
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btWheelInfoRaycastInfo::  setM_suspensionLength(float value ) {
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    impl->m_suspensionLength = value;
}

float btWheelInfoRaycastInfo:: m_suspensionLength(){
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    return impl->m_suspensionLength;
}

void btWheelInfoRaycastInfo::  setM_hardPointWS(btVector3B* value ) {
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_hardPointWS = ret;
    setRef("hardPointWS",value);
}

btVector3B* btWheelInfoRaycastInfo:: m_hardPointWS(){
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    btVector3* ret = impl->m_hardPointWS;
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if( wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btWheelInfoRaycastInfo::  setM_wheelDirectionWS(btVector3B* value ) {
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_wheelDirectionWS = ret;
    setRef("wheelDirectionWS", value);
}

btVector3B* btWheelInfoRaycastInfo:: m_wheelDirectionWS(){
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    btVector3* ret = impl->m_wheelDirectionWS;
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if( wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }

    return wrapper;
}

void btWheelInfoRaycastInfo::  setM_wheelAxleWS(btVector3B* value ) {
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_wheelAxleWS = ret;
    setRef("wheelAxleWS",value);
}

btVector3B* btWheelInfoRaycastInfo:: m_wheelAxleWS(){
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    btVector3* ret = impl->m_wheelAxleWS;
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if( wrapper == NULL) {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }

    return wrapper;
}

void btWheelInfoRaycastInfo::  setM_isInContact(bool value ) {
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    impl->m_isInContact = value;
}

bool btWheelInfoRaycastInfo:: m_isInContact(){
    btWheelInfoRaycastInf *impl = (btWheelInfoRaycastInf*) m_impl;
    return impl->m_isInContact;
}

void btWheelInfoRaycastInfo::  setM_groundObject(btBlinkWrapper* value ) {
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    void * ret = value->getImpl();
    impl->m_groundObject = ret;
    setRef("groundObject", value);
}

btBlinkWrapper* btWheelInfoRaycastInfo:: m_groundObject(){
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    void* ret = impl->m_groundObject;

    btBlinkWrapper *wrapper = (btBlinkWrapper*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if( wrapper == NULL) {
        wrapper = new btBlinkWrapper();
        wrapper->setImpl(ret, false);
    }
    
    return wrapper;
}

}
