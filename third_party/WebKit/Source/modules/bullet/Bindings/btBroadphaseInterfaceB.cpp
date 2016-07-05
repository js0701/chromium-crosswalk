#include "config.h"
#include "btBroadphaseInterfaceB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btBroadphaseInterfaceB:: btBroadphaseInterfaceB() {} 

btBroadphaseInterfaceB:: ~btBroadphaseInterfaceB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btBroadphaseInterface*) m_impl;
    }
    m_impl = NULL;

 }

}
