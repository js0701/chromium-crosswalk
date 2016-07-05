#include "config.h"
#include "btConvexHullShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConvexHullShapeB:: btConvexHullShapeB() {} 

btConvexHullShapeB:: ~btConvexHullShapeB() {    
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btConvexHullShape*) m_impl;
    }
    m_impl = NULL;
 }

btConvexHullShapeB* btConvexHullShapeB::  create() { 
    btConvexHullShapeB *wrapper = new btConvexHullShapeB();
    btConvexHullShape *impl = new btConvexHullShape();
    wrapper->setImpl(impl, true);
    return wrapper;
}

void btConvexHullShapeB:: addPoint(btVector3B* point) { 
    btConvexHullShape *impl = (btConvexHullShape*) m_impl;
    impl->addPoint(*(btVector3*)(point->getImpl()));
    setRef(point);
}

void btConvexHullShapeB:: addPoint(btVector3B* point, bool recalculateLocalAABB) {
    btConvexHullShape *impl = (btConvexHullShape*) m_impl;
    impl->addPoint(*(btVector3*)(point->getImpl()),recalculateLocalAABB);
    setRef(point);
}

void btConvexHullShapeB:: setMargin(float margin) {
    btConvexHullShape *impl = (btConvexHullShape*) m_impl;
    impl->setMargin(margin);
}

float btConvexHullShapeB:: getMargin() {
    btConvexHullShape *impl = (btConvexHullShape*) m_impl;
    return impl->getMargin();
}

}
