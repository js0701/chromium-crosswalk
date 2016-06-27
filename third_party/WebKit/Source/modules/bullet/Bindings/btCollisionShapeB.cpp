#include "config.h"
#include "btCollisionShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionShapeB:: btCollisionShapeB() {} 

btCollisionShapeB:: ~btCollisionShapeB() {
}

void btCollisionShapeB:: setLocalScaling(btVector3B* scaling) {
    btCollisionShape *impl = (btCollisionShape*) m_impl;
    impl->setLocalScaling(*(btVector3*)(scaling->getImpl()));
    setRef("scaling", scaling);
}

void btCollisionShapeB:: calculateLocalInertia(float mass, btVector3B* inertia) {
    btCollisionShape *impl = (btCollisionShape*) m_impl;
    impl->calculateLocalInertia(mass,*(btVector3*)(inertia->getImpl()));
}

}
