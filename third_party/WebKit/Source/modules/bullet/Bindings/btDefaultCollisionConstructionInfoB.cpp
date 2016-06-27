#include "config.h"
#include "btDefaultCollisionConstructionInfoB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDefaultCollisionConstructionInfoB:: btDefaultCollisionConstructionInfoB() {} 

btDefaultCollisionConstructionInfoB:: ~btDefaultCollisionConstructionInfoB() {

 }

btDefaultCollisionConstructionInfoB* btDefaultCollisionConstructionInfoB::  create() { 
    btDefaultCollisionConstructionInfoB *wrapper = new btDefaultCollisionConstructionInfoB();
    btDefaultCollisionConstructionInfo *impl = new btDefaultCollisionConstructionInfo();
    wrapper->setImpl(impl, true);
    return wrapper;
}

}
