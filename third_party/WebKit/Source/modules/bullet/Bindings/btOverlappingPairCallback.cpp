#include "config.h"
#include "btOverlappingPairCallback.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btOverlappingPairCallback:: btOverlappingPairCallback() {} 

btOverlappingPairCallback:: ~btOverlappingPairCallback() { 
if(m_impl != null) delete (btOverlappingPairCallbac*) m_impl;
 }

}
