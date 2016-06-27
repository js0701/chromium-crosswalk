#include "config.h"
#include "btVector3B.h"
#include "../btBulletDynamicsCommon.h"
#include <android/log.h>
#define LOG_TAG "btVector3B"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

namespace blink {
btVector3B:: btVector3B() {} 

btVector3B:: ~btVector3B() { 

}

btVector3B* btVector3B::  create() { 
    btVector3B *wrapper = new btVector3B();
    btVector3 *impl = new btVector3();
    wrapper->setImpl(impl, true);
    return wrapper;
}

btVector3B* btVector3B::  create(float x, float y, float z) { 
    btVector3B *wrapper = new btVector3B();
    btVector3 *impl = new btVector3(x, y, z);
    wrapper->setImpl(impl, true);
    return wrapper;
}

bool btVector3B:: runTest()
{
    btVector3 testVector;
    float a1, a2, a3;
    float x, y, z;

    x = -1.1; y= 1.235; z= 3.14159;

    testVector.setX(x);
    testVector.setY(y);
    testVector.setZ(z);

    a1 = testVector.x();
    a2 = testVector.y();
    a3 = testVector.z();

    if(a1 != x)
    {
       LOGD("SetX failed");
       return false;
    }
    if(a2 != y)
    {
       LOGD("SetY failed");
       return false;
    }
    if(a3 != z)
    {
       LOGD("SetZ failed");
       return false;
    }

    LOGD("runTest pass");
    return true;

}

float btVector3B:: length() {
    btVector3 *impl = (btVector3*) m_impl;
    return impl->length();
}

void btVector3B:: setValue(float x, float y, float z) {
    btVector3 *impl = (btVector3*) m_impl;
    impl->setValue(x, y, z);
}

void btVector3B:: normalize() {
    btVector3 *impl = (btVector3*) m_impl;
    impl->normalize();
}

float btVector3B:: dot(btVector3B* v) {
    btVector3 *impl = (btVector3*) m_impl;
    return impl->dot(*(const btVector3*)(v->getImpl()));
}

btVector3B* btVector3B:: op_mul(float x) {
    btVector3 *impl = (btVector3*) m_impl;
    btVector3B* wrapper = new btVector3B();
    btVector3* ret = new btVector3( (*(const btVector3 *)impl) * x );
    wrapper->setImpl(ret, true);
    return wrapper;
}

btVector3B* btVector3B:: op_add(btVector3B* v) {
    btVector3 *impl = (btVector3*) m_impl;
    btVector3B* wrapper = new btVector3B();
    btVector3* ret = new btVector3((*(const btVector3 *)impl) + (*(const btVector3 *)v));
    wrapper->setImpl(ret, true);
    return wrapper;
}

btVector3B* btVector3B:: op_sub(btVector3B* v) {
    btVector3 *impl = (btVector3*) m_impl;
    btVector3B* wrapper = new btVector3B();
    btVector3* ret = new btVector3((*(const btVector3 *)impl) - (*(const btVector3 *)v));
    wrapper->setImpl(ret, true);
    return wrapper;
}

void btVector3B::  setX(float value ) {
    btVector3 *impl = (btVector3*) m_impl;
    impl->setX(value);

    //float* pV = (float*) m_impl;
    //pV[0] = value;
}

float btVector3B:: x(){
    btVector3 *impl = (btVector3*) m_impl;
    return impl->x();
}

void btVector3B::  setY(float value ) {
    btVector3 *impl = (btVector3*) m_impl;
    impl->setY(value);

    //float* pV = (float*) m_impl;
    //pV[1] = value;
}

float btVector3B:: y(){
    btVector3 *impl = (btVector3*) m_impl;
    return impl->y();
}

void btVector3B::  setZ(float value ) {
    btVector3 *impl = (btVector3*) m_impl;
    impl->setZ(value);
    
    //float* pV = (float*) m_impl;
    //pV[2] = value;
}

float btVector3B:: z(){
    btVector3 *impl = (btVector3*) m_impl;
    return impl->z();
}

}
