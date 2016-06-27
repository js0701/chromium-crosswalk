#include "config.h"
#include "btDefaultVehicleRaycasterB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDefaultVehicleRaycasterB:: btDefaultVehicleRaycasterB() {} 

btDefaultVehicleRaycasterB:: ~btDefaultVehicleRaycasterB() {

 }

btDefaultVehicleRaycasterB* btDefaultVehicleRaycasterB::  create(btDynamicsWorldB* world) { 
    btDefaultVehicleRaycasterB *wrapper = new btDefaultVehicleRaycasterB();
    btDefaultVehicleRaycaster *impl = new btDefaultVehicleRaycaster((btDynamicsWorld*)(world->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("world", world);
    return wrapper;
}

}
