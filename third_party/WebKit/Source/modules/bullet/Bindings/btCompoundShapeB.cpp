#include "config.h"
#include "btCompoundShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCompoundShapeB:: btCompoundShapeB() {} 

btCompoundShapeB:: ~btCompoundShapeB() {

}

btCompoundShapeB* btCompoundShapeB::  create() { 
    btCompoundShapeB *wrapper = new btCompoundShapeB();
    btCompoundShape *impl = new btCompoundShape();
    wrapper->setImpl(impl, true);
    return wrapper;
}

btCompoundShapeB* btCompoundShapeB::  create(bool enableDynamicAabbTree) { 
    btCompoundShapeB *wrapper = new btCompoundShapeB();
    btCompoundShape *impl = new btCompoundShape(enableDynamicAabbTree);
    wrapper->setImpl(impl, true);
    return wrapper;
}

void btCompoundShapeB:: addChildShape(btTransformB* localTransform, btCollisionShapeB* shape) {
    btCompoundShape *impl = (btCompoundShape*) m_impl;
    impl->addChildShape(*(btTransform*)(localTransform->getImpl()),(btCollisionShape*)(shape->getImpl()));
    setRef(localTransform);
    setRef(shape);
}

void btCompoundShapeB:: removeChildShapeByIndex(long childShapeindex) {
    btCompoundShape *impl = (btCompoundShape*) m_impl;
    impl->removeChildShapeByIndex(childShapeindex);
}

long btCompoundShapeB:: getNumChildShapes() {
    btCompoundShape *impl = (btCompoundShape*) m_impl;
    return impl->getNumChildShapes();
}

btCollisionShapeB* btCompoundShapeB:: getChildShape(long index) {
    btCompoundShape *impl = (btCompoundShape*) m_impl;
    btCollisionShape* ret = impl->getChildShape(index);
    btCollisionShapeB *wrapper = (btCollisionShapeB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btCollisionShapeB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btCompoundShapeB:: setMargin(float margin) {
    btCompoundShape *impl = (btCompoundShape*) m_impl;
    impl->setMargin(margin);
}

float btCompoundShapeB:: getMargin() {
    btCompoundShape *impl = (btCompoundShape*) m_impl;
    return impl->getMargin();
}

}
