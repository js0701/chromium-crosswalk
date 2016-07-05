#include "config.h"
#include "btTriangleMeshShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btTriangleMeshShapeB:: btTriangleMeshShapeB() {} 

btTriangleMeshShapeB:: ~btTriangleMeshShapeB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btTriangleMeshShape*) m_impl;
    }
    m_impl = NULL;

}

}
