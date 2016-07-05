#include "config.h"
#include "btActionInterfaceB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btActionInterfaceB:: btActionInterfaceB() {} 

btActionInterfaceB:: ~btActionInterfaceB() {
        if(m_impl)
        {
            //m_impl->setWrapper(NULL);
            btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
            if(m_isOwner)
               delete (btActionInterface*) m_impl;
        }
        m_impl = NULL;
 
 }

}
