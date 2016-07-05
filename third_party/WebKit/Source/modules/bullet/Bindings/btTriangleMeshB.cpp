#include "config.h"
#include "btTriangleMeshB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btTriangleMeshB:: btTriangleMeshB() {} 

btTriangleMeshB:: ~btTriangleMeshB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btTriangleMesh*) m_impl;
    }
    m_impl = NULL;

 }

btTriangleMeshB* btTriangleMeshB::  create() { 
    btTriangleMeshB *wrapper = new btTriangleMeshB();
    btTriangleMesh *impl = new btTriangleMesh();
    wrapper->setImpl(impl, true);
    return wrapper;
}

btTriangleMeshB* btTriangleMeshB::  create(bool use32bitIndices) { 
    btTriangleMeshB *wrapper = new btTriangleMeshB();
    btTriangleMesh *impl = new btTriangleMesh(use32bitIndices);
    wrapper->setImpl(impl, true);
    return wrapper;
}

btTriangleMeshB* btTriangleMeshB::  create(bool use32bitIndices, bool use4componentVertices) { 
    btTriangleMeshB *wrapper = new btTriangleMeshB();
    btTriangleMesh *impl = new btTriangleMesh(use32bitIndices, use4componentVertices);
    wrapper->setImpl(impl, true);
    return wrapper;
}

void btTriangleMeshB:: addTriangle(btVector3B* vertex0, btVector3B* vertex1, btVector3B* vertex2) { 
    btTriangleMesh *impl = (btTriangleMesh*) m_impl;
    impl->addTriangle(*(const btVector3*)(vertex0->getImpl()),*(const btVector3*)(vertex1->getImpl()),*(const btVector3*)(vertex2->getImpl()));
    setRef(vertex0);
    setRef(vertex1);
    setRef(vertex2);
}

void btTriangleMeshB:: addTriangle(btVector3B* vertex0, btVector3B* vertex1, btVector3B* vertex2, bool removeDuplicateVertices) {
    btTriangleMesh *impl = (btTriangleMesh*) m_impl;
    impl->addTriangle(*(const btVector3*)(vertex0->getImpl()),*(const btVector3*)(vertex1->getImpl()),*(const btVector3*)(vertex2->getImpl()),removeDuplicateVertices);
    setRef(vertex0);
    setRef(vertex1);
    setRef(vertex2);
}

}
