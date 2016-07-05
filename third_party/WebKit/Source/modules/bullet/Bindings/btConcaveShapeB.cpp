#include "config.h"
#include "btConcaveShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConcaveShapeB:: btConcaveShapeB() {} 

btConcaveShapeB:: ~btConcaveShapeB() { 
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btConcaveShape*) m_impl;
    }
    m_impl = NULL;

 }

}
