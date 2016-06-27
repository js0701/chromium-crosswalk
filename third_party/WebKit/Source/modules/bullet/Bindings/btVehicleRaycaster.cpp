#include "config.h"
#include "btVehicleRaycaster.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btVehicleRaycaster:: btVehicleRaycaster() {} 

btVehicleRaycaster:: ~btVehicleRaycaster() { 
if(m_impl != null) delete (btVehicleRaycaste*) m_impl;
 }

}
