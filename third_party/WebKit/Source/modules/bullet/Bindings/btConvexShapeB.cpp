#include "config.h"
#include "btConvexShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConvexShapeB:: btConvexShapeB() {} 

btConvexShapeB:: ~btConvexShapeB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btConvexShape*) m_impl;
    }
    m_impl = NULL;

 }

}
