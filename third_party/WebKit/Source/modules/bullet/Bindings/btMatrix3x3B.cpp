#include "config.h"
#include "btMatrix3x3B.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btMatrix3x3B:: btMatrix3x3B() {} 

btMatrix3x3B:: ~btMatrix3x3B() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btMatrix3x3*) m_impl;
    }
    m_impl = NULL;

 }

void btMatrix3x3B:: setEulerZYX(float ex, float ey, float ez) {
    btMatrix3x3 *impl = (btMatrix3x3*) m_impl;
    impl->setEulerZYX(ex,ey,ez);
}

void btMatrix3x3B:: getRotation(btQuaternionB* q) {
    btMatrix3x3 *impl = (btMatrix3x3*) m_impl;
    impl->getRotation(*(btQuaternion*)(q->getImpl()));
}

btVector3B* btMatrix3x3B:: getRow(long y) {
    btMatrix3x3 *impl = (btMatrix3x3*) m_impl;
    btVector3* ret = (btVector3*)(&(impl->getRow(y)));
    btVector3B *wrapper = (btVector3B*)  btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
