#include "config.h"
#include "btQuaternionB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btQuaternionB:: btQuaternionB() {} 

btQuaternionB:: ~btQuaternionB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btQuaternion*) m_impl;
    }
    m_impl = NULL;

 }

btQuaternionB* btQuaternionB::  create(float x, float y, float z, float w) { 
    btQuaternionB *wrapper = new btQuaternionB();
    btQuaternion *impl = new btQuaternion(x, y, z, w);
    wrapper->setImpl(impl, true);
    return wrapper;
}

btQuaternionB* btQuaternionB::  create(float yaw, float pitch, float roll) { 
    btQuaternionB *wrapper = new btQuaternionB();
    btQuaternion *impl = new btQuaternion(yaw, pitch, roll);
    wrapper->setImpl(impl, true);
    return wrapper;
}

btQuaternionB* btQuaternionB::  create(btVector3B* axis, float angle) { 
    btQuaternionB *wrapper = new btQuaternionB();
    btVector3*    axisImpl = (btVector3*) (axis->getImpl());
    btQuaternion *impl = new btQuaternion(*axisImpl, angle);
    wrapper->setImpl(impl, true);
    wrapper->setRef("axis", axis);
    return wrapper;
}


void btQuaternionB:: setValue(float x, float y, float z, float w) {
    btQuaternion *impl = (btQuaternion*) m_impl;
    impl->setValue(x,y,z,w);
}

void btQuaternionB:: setEulerZYX(float z, float y, float x) {
    btQuaternion *impl = (btQuaternion*) m_impl;
    impl->setEulerZYX(z,y,x);
}

void btQuaternionB:: normalize() {
    btQuaternion *impl = (btQuaternion*) m_impl;
    impl->normalize();
}

}
