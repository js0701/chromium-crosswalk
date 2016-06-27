#include "config.h"
#include "btVector4B.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btVector4B:: btVector4B() {} 

btVector4B:: ~btVector4B() {

 }

btVector4B* btVector4B::  create() { 
    btVector4B *wrapper = new btVector4B();
    btVector4 *impl = new btVector4();
    wrapper->setImpl(impl, true);
    return wrapper;
}

btVector4B* btVector4B::  create(float x, float y, float z, float w) { 
    btVector4B *wrapper = new btVector4B();
    btVector4 *impl = new btVector4(x, y, z, w);
    wrapper->setImpl(impl, true);
    return wrapper;
}

float btVector4B:: w() {
    btVector4 *impl = (btVector4*) m_impl;
    return impl->w();
}

void btVector4B:: setValue(float x, float y, float z, float w) {
    btVector4 *impl = (btVector4*) m_impl;
    impl->setValue(x,y,z,w);
}

}
