#include "config.h"
#include "btPoint2PointConstraintB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btPoint2PointConstraintB:: btPoint2PointConstraintB() {} 

btPoint2PointConstraintB:: ~btPoint2PointConstraintB() {

 }

btPoint2PointConstraintB* btPoint2PointConstraintB::  create(btRigidBodyB* rbA, btRigidBodyB* rbB, btVector3B* pivotInA, btVector3B* pivotInB) { 
    btPoint2PointConstraintB *wrapper = new btPoint2PointConstraintB();
    btPoint2PointConstraint *impl = new btPoint2PointConstraint(*(btRigidBody*)(rbA->getImpl()), *(btRigidBody*)(rbB->getImpl()), *(btVector3*)(pivotInA->getImpl()), *(btVector3*)(pivotInB->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("pivotA", pivotInA);
    wrapper->setRef("rbB", rbB);
    wrapper->setRef("pivotB", pivotInB);
    return wrapper;
}

btPoint2PointConstraintB* btPoint2PointConstraintB::  create(btRigidBodyB* rbA, btVector3B* pivotInA) { 
    btPoint2PointConstraintB *wrapper = new btPoint2PointConstraintB();
    btPoint2PointConstraint *impl = new btPoint2PointConstraint(*(btRigidBody*)(rbA->getImpl()), *(btVector3*)(pivotInA->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("rbA", rbA);
    wrapper->setRef("pivotA", pivotInA);
    return wrapper;
}

void btPoint2PointConstraintB:: setPivotA(btVector3B* pivotA) {
    btPoint2PointConstraint *impl = (btPoint2PointConstraint*) m_impl;
    impl->setPivotA(*(btVector3*)(pivotA->getImpl()));
    setRef("pivotA", pivotA);
}

void btPoint2PointConstraintB:: setPivotB(btVector3B* pivotB) {
    btPoint2PointConstraint *impl = (btPoint2PointConstraint*) m_impl;
    impl->setPivotB(*(btVector3*)(pivotB->getImpl()));
    setRef("pivotB", pivotB);
}

btVector3B* btPoint2PointConstraintB:: getPivotInA() {
    btPoint2PointConstraint *impl = (btPoint2PointConstraint*) m_impl;
    btVector3* ret = (btVector3*)&(impl->getPivotInA());
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

btVector3B* btPoint2PointConstraintB:: getPivotInB() {
    btPoint2PointConstraint *impl = (btPoint2PointConstraint*) m_impl;
    btVector3* ret = (btVector3*)&(impl->getPivotInB());
    btVector3B *wrapper = (btVector3B*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btVector3B();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

void btPoint2PointConstraintB::  setM_setting(btConstraintSettingB* value ) {
    btPoint2PointConstraint *impl = (btPoint2PointConstraint*) m_impl;
    impl->m_setting = *(btConstraintSetting*) (value->getImpl());
    setRef("setting", value);
}

btConstraintSettingB* btPoint2PointConstraintB:: m_setting(){
    btPoint2PointConstraint *impl = (btPoint2PointConstraint*) m_impl;
    btConstraintSetting* ret = &(impl->m_setting);
    btConstraintSettingB* wrapper = (btConstraintSettingB*) btBlinkWrapperRepo::getWrapperForImpl(ret);
    if(wrapper == NULL)
    {
        wrapper = new btConstraintSettingB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
