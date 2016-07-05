#include "config.h"
#include "btCollisionConfigurationB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionConfigurationB:: btCollisionConfigurationB() {} 

btCollisionConfigurationB:: ~btCollisionConfigurationB() {     
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCollisionConfiguration*) m_impl;
    }
    m_impl = NULL;

 }

}
