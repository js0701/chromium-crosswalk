#include "config.h"
#include "btConstraintSettingB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConstraintSettingB:: btConstraintSettingB() {} 

btConstraintSettingB:: ~btConstraintSettingB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btConstraintSetting*) m_impl;
    }
    m_impl = NULL;

 }

btConstraintSettingB* btConstraintSettingB::  create() { 
    btConstraintSettingB *wrapper = new btConstraintSettingB();
    btConstraintSetting *impl = new btConstraintSetting();
    wrapper->setImpl(impl, true);
    return wrapper;
}

void btConstraintSettingB::  setM_tau(float value ) {
    btConstraintSetting *impl = (btConstraintSetting*) m_impl;
    impl->m_tau = value;
}

float btConstraintSettingB:: m_tau(){
    btConstraintSetting *impl = (btConstraintSetting*) m_impl;
    return impl->m_tau;
}

void btConstraintSettingB::  setM_damping(float value ) {
    btConstraintSetting *impl = (btConstraintSetting*) m_impl;
    impl->m_damping = value;
}

float btConstraintSettingB:: m_damping(){
    btConstraintSetting *impl = (btConstraintSetting*) m_impl;
    return impl->m_damping;
}

void btConstraintSettingB::  setM_impulseClamp(float value ) {
    btConstraintSetting *impl = (btConstraintSetting*) m_impl;
    impl->m_impulseClamp = value;
}

float btConstraintSettingB:: m_impulseClamp(){
    btConstraintSetting *impl = (btConstraintSetting*) m_impl;
    return impl->m_impulseClamp;
}

}
