#include "config.h"
#include "btOverlappingPairCacheB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btOverlappingPairCacheB:: btOverlappingPairCacheB() {} 

btOverlappingPairCacheB:: ~btOverlappingPairCacheB() {

 }

void btOverlappingPairCacheB:: setInternalGhostPairCallback(btOverlappingPairCallbackB* ghostPairCallback) {
    btOverlappingPairCache *impl = (btOverlappingPairCache*) m_impl;
    impl->setInternalGhostPairCallback((btOverlappingPairCallback*)(ghostPairCallback->getImpl()));
    setRef("ghostPairCallback", ghostPairCallback);

}

}
