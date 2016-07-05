#include "config.h"
#include "btOverlappingPairCacheB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btOverlappingPairCacheB:: btOverlappingPairCacheB() {} 

btOverlappingPairCacheB:: ~btOverlappingPairCacheB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btOverlappingPairCache*) m_impl;
    }
    m_impl = NULL;

 }

void btOverlappingPairCacheB:: setInternalGhostPairCallback(btOverlappingPairCallbackB* ghostPairCallback) {
    btOverlappingPairCache *impl = (btOverlappingPairCache*) m_impl;
    impl->setInternalGhostPairCallback((btOverlappingPairCallback*)(ghostPairCallback->getImpl()));
    setRef("ghostPairCallback", ghostPairCallback);

}

}
