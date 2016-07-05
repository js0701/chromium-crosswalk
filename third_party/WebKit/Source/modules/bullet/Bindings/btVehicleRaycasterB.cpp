#include "config.h"
#include "btVehicleRaycasterB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btVehicleRaycasterB:: btVehicleRaycasterB() {} 

btVehicleRaycasterB:: ~btVehicleRaycasterB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btVehicleRaycaster*) m_impl;
    }
    m_impl = NULL;

}

}
