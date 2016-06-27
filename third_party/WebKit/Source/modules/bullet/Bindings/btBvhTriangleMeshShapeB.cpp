#include "config.h"
#include "btBvhTriangleMeshShapeB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btBvhTriangleMeshShapeB:: btBvhTriangleMeshShapeB() {} 

btBvhTriangleMeshShapeB:: ~btBvhTriangleMeshShapeB() {

 }

btBvhTriangleMeshShapeB* btBvhTriangleMeshShapeB::  create(btStridingMeshInterfaceB* meshInterface, bool useQuantizedAabbCompression) { 
    btBvhTriangleMeshShapeB *wrapper = new btBvhTriangleMeshShapeB();
    btBvhTriangleMeshShape *impl = new btBvhTriangleMeshShape((btStridingMeshInterface*)(meshInterface->getImpl()), useQuantizedAabbCompression);
    wrapper->setImpl(impl, true);
    wrapper->setRef("meshInterface", meshInterface);
    return wrapper;
}

btBvhTriangleMeshShapeB* btBvhTriangleMeshShapeB::  create(btStridingMeshInterfaceB* meshInterface, bool useQuantizedAabbCompression, bool buildBvh) { 
    btBvhTriangleMeshShapeB *wrapper = new btBvhTriangleMeshShapeB();
    btBvhTriangleMeshShape *impl = new btBvhTriangleMeshShape((btStridingMeshInterface*)(meshInterface->getImpl()), useQuantizedAabbCompression, buildBvh);
    wrapper->setImpl(impl, true);
    wrapper->setRef("meshInterface", meshInterface);
    return wrapper;
}

}
