#include "config.h"
#include "btStridingMeshInterfaceB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btStridingMeshInterfaceB:: btStridingMeshInterfaceB() {}

btStridingMeshInterfaceB:: ~btStridingMeshInterfaceB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btStridingMeshInterface*) m_impl;
    }
    m_impl = NULL;
}

}
