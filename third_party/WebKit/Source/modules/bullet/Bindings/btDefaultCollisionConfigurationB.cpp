#include "config.h"
#include "btDefaultCollisionConfigurationB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDefaultCollisionConfigurationB:: btDefaultCollisionConfigurationB() {} 

btDefaultCollisionConfigurationB:: ~btDefaultCollisionConfigurationB() { 

 }

btDefaultCollisionConfigurationB* btDefaultCollisionConfigurationB::  create() { 
    btDefaultCollisionConfigurationB *wrapper = new btDefaultCollisionConfigurationB();
    btDefaultCollisionConfiguration *impl = new btDefaultCollisionConfiguration();
    wrapper->setImpl(impl, true);
    return wrapper;
}

btDefaultCollisionConfigurationB* btDefaultCollisionConfigurationB::  create(btDefaultCollisionConstructionInfoB* constructionInfo) { 
    btDefaultCollisionConfigurationB *wrapper = new btDefaultCollisionConfigurationB();
    btDefaultCollisionConfiguration *impl = new btDefaultCollisionConfiguration(*(btDefaultCollisionConstructionInfo*)(constructionInfo->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("constructionInfo",constructionInfo);
    return wrapper;
}

}
