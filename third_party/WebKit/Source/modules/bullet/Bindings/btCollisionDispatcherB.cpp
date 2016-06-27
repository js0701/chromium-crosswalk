#include "config.h"
#include "btCollisionDispatcherB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionDispatcherB:: btCollisionDispatcherB() {} 

btCollisionDispatcherB:: ~btCollisionDispatcherB() {

 }

btCollisionDispatcherB* btCollisionDispatcherB::  create(btDefaultCollisionConfigurationB* conf) { 
    btCollisionDispatcherB *wrapper = new btCollisionDispatcherB();
    btCollisionDispatcher *impl = new btCollisionDispatcher((btDefaultCollisionConfiguration*)(conf->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("conf", conf);
    return wrapper;
}

}
