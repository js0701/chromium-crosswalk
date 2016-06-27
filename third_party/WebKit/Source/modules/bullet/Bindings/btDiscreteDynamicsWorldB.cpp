#include "config.h"
#include "btDiscreteDynamicsWorldB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDiscreteDynamicsWorldB:: btDiscreteDynamicsWorldB() {} 

btDiscreteDynamicsWorldB:: ~btDiscreteDynamicsWorldB() {

 }

btDiscreteDynamicsWorldB* btDiscreteDynamicsWorldB::  create(btDispatcherB* dispatcher, btBroadphaseInterfaceB* pairCache, btConstraintSolverB* constraintSolver, btCollisionConfigurationB* collisionConfiguration) { 
    btDiscreteDynamicsWorldB *wrapper = new btDiscreteDynamicsWorldB();
    btDiscreteDynamicsWorld *impl = new btDiscreteDynamicsWorld((btDispatcher*)(dispatcher->getImpl()), (btBroadphaseInterface*)(pairCache->getImpl()), (btConstraintSolver*)(constraintSolver->getImpl()), (btCollisionConfiguration*)(collisionConfiguration->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("dispatcher", dispatcher);
    wrapper->setRef("pairCache", pairCache);
    wrapper->setRef("constraintSolver", constraintSolver);
    wrapper->setRef("collisionConfiguration", collisionConfiguration);
    return wrapper;
}

void btDiscreteDynamicsWorldB:: setGravity(btVector3B* gravity) {
    btDiscreteDynamicsWorld *impl = (btDiscreteDynamicsWorld*) m_impl;
    impl->setGravity(*(btVector3*)(gravity->getImpl()));
    setRef("gravity", gravity);
}

btVector3B* btDiscreteDynamicsWorldB:: getGravity() {
    btDiscreteDynamicsWorld *impl = (btDiscreteDynamicsWorld*) m_impl;
    btVector3  tmp = impl->getGravity();
    btVector3* ret = new btVector3(tmp);
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btDiscreteDynamicsWorldB:: addRigidBody(btRigidBodyB* body) {
    btDiscreteDynamicsWorld *impl = (btDiscreteDynamicsWorld*) m_impl;
    impl->addRigidBody((btRigidBody*)(body->getImpl()));
    //if(!m_refedWrappers.contains(body))
    //    m_refedWrappers.append(body);
    setRef(body);
}

void btDiscreteDynamicsWorldB:: addRigidBody(btRigidBodyB* body, short group, short mask) {
    btDiscreteDynamicsWorld *impl = (btDiscreteDynamicsWorld*) m_impl;
    impl->addRigidBody((btRigidBody*)(body->getImpl()),group,mask);
    setRef(body);
}

void btDiscreteDynamicsWorldB:: removeRigidBody(btRigidBodyB* body) {
    btDiscreteDynamicsWorld *impl = (btDiscreteDynamicsWorld*) m_impl;
    impl->removeRigidBody((btRigidBody*)(body->getImpl()));
    removeRef(body);
}

void btDiscreteDynamicsWorldB:: addConstraint(btTypedConstraintB* constraint) { 
    btDiscreteDynamicsWorld *impl = (btDiscreteDynamicsWorld*) m_impl;
    impl->addConstraint((btTypedConstraint*)(constraint->getImpl()));
    setRef(constraint);
}

void btDiscreteDynamicsWorldB:: addConstraint(btTypedConstraintB* constraint, bool disableCollisionsBetweenLinkedBodies) {
    btDiscreteDynamicsWorld *impl = (btDiscreteDynamicsWorld*) m_impl;
    impl->addConstraint((btTypedConstraint*)(constraint->getImpl()),disableCollisionsBetweenLinkedBodies);
    setRef(constraint);
}

void btDiscreteDynamicsWorldB:: removeConstraint(btTypedConstraintB* constraint) {
    btDiscreteDynamicsWorld *impl = (btDiscreteDynamicsWorld*) m_impl;
    impl->removeConstraint((btTypedConstraint*)(constraint->getImpl()));
    removeRef(constraint);
}

long btDiscreteDynamicsWorldB:: stepSimulation(float timeStep) { 
    btDiscreteDynamicsWorld *impl = (btDiscreteDynamicsWorld*) m_impl;
    return impl->stepSimulation(timeStep);
}

long btDiscreteDynamicsWorldB:: stepSimulation(float timeStep, long maxSubSteps) { 
    btDiscreteDynamicsWorld *impl = (btDiscreteDynamicsWorld*) m_impl;
    return impl->stepSimulation(timeStep,maxSubSteps);
}

long btDiscreteDynamicsWorldB:: stepSimulation(float timeStep, long maxSubSteps, float fixedTimeStep) {
    btDiscreteDynamicsWorld *impl = (btDiscreteDynamicsWorld*) m_impl;
    return impl->stepSimulation(timeStep,maxSubSteps,fixedTimeStep);
}

}
