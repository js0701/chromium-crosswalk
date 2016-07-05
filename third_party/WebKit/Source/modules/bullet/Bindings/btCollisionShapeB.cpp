#include "config.h"
#include "btCollisionShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionShapeB:: btCollisionShapeB() {} 

btCollisionShapeB:: ~btCollisionShapeB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCollisionShape*) m_impl;
    }
    m_impl = NULL;
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
