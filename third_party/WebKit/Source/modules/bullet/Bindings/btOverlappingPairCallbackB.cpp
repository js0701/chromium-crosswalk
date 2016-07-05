#include "config.h"
#include "btOverlappingPairCallbackB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btOverlappingPairCallbackB:: btOverlappingPairCallbackB() {} 

btOverlappingPairCallbackB:: ~btOverlappingPairCallbackB() {
        if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btOverlappingPairCallback*) m_impl;
    }
    m_impl = NULL;

}

}
