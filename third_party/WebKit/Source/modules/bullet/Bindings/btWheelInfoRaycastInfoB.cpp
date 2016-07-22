#include "config.h"
#include "btWheelInfoRaycastInfoB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btWheelInfoRaycastInfoB:: btWheelInfoRaycastInfoB() {}

btWheelInfoRaycastInfoB:: ~btWheelInfoRaycastInfoB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btWheelInfo::RaycastInfo*) m_impl;
    }
    m_impl = NULL;

}

void btWheelInfoRaycastInfoB::  setM_contactNormalWS(btVector3B* value ) {
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_contactNormalWS = *ret;
    setRef("contactNormalWS", value);
}

btVector3B* btWheelInfoRaycastInfoB:: m_contactNormalWS(){
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    btVector3* ret = &(impl->m_contactNormalWS);
    btVector3B *wrapper = ( btVector3B *)btBlinkWrapperRepo::getWrapperForImpl(ret);  
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btWheelInfoRaycastInfoB::  setM_contactPointWS(btVector3B* value ) {
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_contactPointWS = *ret;
    setRef("contactPointWS", value);
}

btVector3B* btWheelInfoRaycastInfoB:: m_contactPointWS(){
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    btVector3* ret = &(impl->m_contactPointWS);
    btVector3B *wrapper = ( btVector3B *)btBlinkWrapperRepo::getWrapperForImpl(ret);  
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btWheelInfoRaycastInfoB::  setM_suspensionLength(float value ) {
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    impl->m_suspensionLength = value;
}

float btWheelInfoRaycastInfoB:: m_suspensionLength(){
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    return impl->m_suspensionLength;
}

void btWheelInfoRaycastInfoB::  setM_hardPointWS(btVector3B* value ) {
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_hardPointWS = *ret;
    setRef("hardPointWS", value);
}

btVector3B* btWheelInfoRaycastInfoB:: m_hardPointWS(){
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    btVector3* ret = &(impl->m_hardPointWS);
    btVector3B *wrapper = ( btVector3B *)btBlinkWrapperRepo::getWrapperForImpl(ret);  
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btWheelInfoRaycastInfoB::  setM_wheelDirectionWS(btVector3B* value ) {
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_wheelDirectionWS = *ret;
    setRef("wheelDirectionWS", value);
}

btVector3B* btWheelInfoRaycastInfoB:: m_wheelDirectionWS(){
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    btVector3* ret = &(impl->m_wheelDirectionWS);
    btVector3B *wrapper = ( btVector3B *)btBlinkWrapperRepo::getWrapperForImpl(ret);  
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btWheelInfoRaycastInfoB::  setM_wheelAxleWS(btVector3B* value ) {
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    btVector3* ret = (btVector3*)(value->getImpl());
    impl->m_wheelAxleWS = *ret;
    setRef("wheelAxleWS", value);
}

btVector3B* btWheelInfoRaycastInfoB:: m_wheelAxleWS(){
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    btVector3* ret = &(impl->m_wheelAxleWS);
    btVector3B *wrapper = ( btVector3B *)btBlinkWrapperRepo::getWrapperForImpl(ret);  
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btWheelInfoRaycastInfoB::  setM_isInContact(bool value ) {
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    impl->m_isInContact = value;
}

bool btWheelInfoRaycastInfoB:: m_isInContact(){
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    return impl->m_isInContact;
}

void btWheelInfoRaycastInfoB::  setM_groundObject(btBlinkWrapper* value ) {
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    void* ret = value->getImpl();
    impl->m_groundObject = ret;
    setRef("groundObject", value);
}

btBlinkWrapper* btWheelInfoRaycastInfoB:: m_groundObject(){
    btWheelInfo::RaycastInfo *impl = (btWheelInfo::RaycastInfo*) m_impl;
    void* ret = (void*) impl->m_groundObject;
    btBlinkWrapper *wrapper = ( btBlinkWrapper*) btBlinkWrapperRepo::getWrapperForImpl(ret);  
    if(wrapper == NULL)
    {
        wrapper = new btBlinkWrapper();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
