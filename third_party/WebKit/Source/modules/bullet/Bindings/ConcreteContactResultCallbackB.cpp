#include "config.h"
#include "ConcreteContactResultCallbackB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
ConcreteContactResultCallbackB:: ConcreteContactResultCallbackB() {} 

ConcreteContactResultCallbackB:: ~ConcreteContactResultCallbackB() {

 }

ConcreteContactResultCallbackB* ConcreteContactResultCallbackB::  create() { 
    ConcreteContactResultCallbackB *wrapper = new ConcreteContactResultCallbackB();
    ConcreteContactResultCallback *impl = new ConcreteContactResultCallback();
    wrapper->setImpl(impl, true);
    return wrapper;
}

void ConcreteContactResultCallbackB:: ConcreteContactResultCallback() {
    ConcreteContactResultCallback *impl = (ConcreteContactResultCallback*) m_impl;
    impl->ConcreteContactResultCallback();
}

float ConcreteContactResultCallbackB:: addSingleResult(btManifoldPointB* cp, btCollisionObjectWrapperB* colObj0Wrap, long partId0, long index0, btCollisionObjectWrapperB* colObj1Wrap, long partId1, long index1) {
    ConcreteContactResultCallback *impl = (ConcreteContactResultCallback*) m_impl;
    setRef(cp);
    setRef(colObj0Wrap);
    setRef(colObj1Wrap);
    return impl->addSingleResult((btManifoldPoint*)(cp->getImpl()),(btCollisionObjectWrapper*)(colObj0Wrap->getImpl()),partId0,index0,(btCollisionObjectWrapper*)(colObj1Wrap->getImpl()),partId1,index1);
}

}
