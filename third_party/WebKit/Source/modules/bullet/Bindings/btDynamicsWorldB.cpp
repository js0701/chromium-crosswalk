#include "config.h"
#include "btDynamicsWorldB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDynamicsWorldB:: btDynamicsWorldB() {} 

btDynamicsWorldB:: ~btDynamicsWorldB() {
    
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btDynamicsWorld*) m_impl;
    }
    m_impl = NULL;

 }

void btDynamicsWorldB:: addAction(btActionInterfaceB* action) {
    btDynamicsWorld *impl = (btDynamicsWorld*) m_impl;
    impl->addAction((btActionInterface*)(action->getImpl()));
    setRef(action);
}

void btDynamicsWorldB:: removeAction(btActionInterfaceB* action) {
    btDynamicsWorld *impl = (btDynamicsWorld*) m_impl;
    impl->removeVehicle((btActionInterface*)(action->getImpl()));
    removeRef(action);
}

void btDynamicsWorldB:: addVehicle(btActionInterfaceB* vehicle) {
    btDynamicsWorld *impl = (btDynamicsWorld*) m_impl;
    impl->addVehicle((btActionInterface*)(vehicle->getImpl()));
    setRef(vehicle);
}

void btDynamicsWorldB:: removeVehicle(btActionInterfaceB* vehicle) {
    btDynamicsWorld *impl = (btDynamicsWorld*) m_impl;
    impl->removeVehicle((btActionInterface*)(vehicle->getImpl()));
    removeRef(vehicle);
}


void btDynamicsWorldB:: clearForces() {
    btDynamicsWorld *impl = (btDynamicsWorld*) m_impl;
    impl->clearForces();
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
