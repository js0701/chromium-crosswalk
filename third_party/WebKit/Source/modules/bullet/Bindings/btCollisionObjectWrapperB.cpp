#include "config.h"
#include "btCollisionObjectWrapperB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionObjectWrapperB:: btCollisionObjectWrapperB() {}

btCollisionObjectWrapperB:: ~btCollisionObjectWrapperB() {
    /*
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCollisionObjectWrapper*) m_impl;
    }
    */
    m_impl = NULL;
 }

}
