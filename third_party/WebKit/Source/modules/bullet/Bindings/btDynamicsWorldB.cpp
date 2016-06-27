#include "config.h"
#include "btDynamicsWorldB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDynamicsWorldB:: btDynamicsWorldB() {} 

btDynamicsWorldB:: ~btDynamicsWorldB() {

 }

void btDynamicsWorldB:: addAction(btActionInterfaceB* action) {
    btDynamicsWorld *impl = (btDynamicsWorld*) m_impl;
    impl->addAction((btActionInterface*)(action->getImpl()));
    setRef(action);
}

void btDynamicsWorldB:: removeAction(btActionInterfaceB* action) {
    btDynamicsWorld *impl = (btDynamicsWorld*) m_impl;
    impl->removeAction((btActionInterface*)(action->getImpl()));
    removeRef(action);
}


btContactSolverInfoB* btDynamicsWorldB:: getSolverInfo() {
    btDynamicsWorld *impl = (btDynamicsWorld*) m_impl;
    btContactSolverInfo* ret = &(impl->getSolverInfo());
    btContactSolverInfoB *wrapper = (btContactSolverInfoB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btContactSolverInfoB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
