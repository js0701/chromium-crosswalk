#include "config.h"
#include "btConvexTriangleMeshShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btConvexTriangleMeshShapeB:: btConvexTriangleMeshShapeB() {} 

btConvexTriangleMeshShapeB:: ~btConvexTriangleMeshShapeB() { 
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btConvexTriangleMeshShape*) m_impl;
    }
    m_impl = NULL;

 }

btConvexTriangleMeshShapeB* btConvexTriangleMeshShapeB::  create(btStridingMeshInterfaceB* meshInterface) { 
    btConvexTriangleMeshShapeB *wrapper = new btConvexTriangleMeshShapeB();
    btConvexTriangleMeshShape *impl = new btConvexTriangleMeshShape((btStridingMeshInterface*)(meshInterface->getImpl()));
    wrapper->setImpl(impl, true);
    wrapper->setRef("meshInterface", meshInterface);
    return wrapper;
}

btConvexTriangleMeshShapeB* btConvexTriangleMeshShapeB::  create(btStridingMeshInterfaceB* meshInterface, bool calcAabb) { 
    btConvexTriangleMeshShapeB *wrapper = new btConvexTriangleMeshShapeB();
    btConvexTriangleMeshShape *impl = new btConvexTriangleMeshShape((btStridingMeshInterface*)(meshInterface->getImpl()), calcAabb);
    wrapper->setImpl(impl, true);
    wrapper->setRef("meshInterface", meshInterface);
    return wrapper;
}

}
