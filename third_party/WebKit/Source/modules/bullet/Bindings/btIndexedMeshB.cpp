#include "config.h"
#include "btIndexedMeshB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btIndexedMeshB:: btIndexedMeshB() {}

btIndexedMeshB:: ~btIndexedMeshB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btIndexedMesh*) m_impl;
    }
    m_impl = NULL;
}

btIndexedMeshB* btIndexedMeshB::  create() {
    btIndexedMeshB *wrapper = new btIndexedMeshB();
    btIndexedMesh *impl = new btIndexedMesh();
    wrapper->setImpl(impl, true);
    return wrapper;
}

int  btIndexedMeshB:: m_numTrangles() {
    btIndexedMesh *impl = (btIndexedMesh*)m_impl;
    return impl->m_numTriangles;

}

void  btIndexedMeshB:: set_m_numTriangles(int numTriangles) {
     btIndexedMesh *impl = (btIndexedMesh*)m_impl;
     impl->m_numTriangles = numTriangles;
 }

int  btIndexedMeshB::m_numVertices() {
     btIndexedMesh *impl = (btIndexedMesh*)m_impl;
     return impl->m_numVertices;
}

void  btIndexedMeshB:: set_m_numVertices(int numVertex) {
     btIndexedMesh *impl = (btIndexedMesh*)m_impl;
     impl->m_numVertices = numVertex;

}

DOMUint8Array*  btIndexedMeshB:: m_triangleIndexBase() {
     btIndexedMesh *impl = (btIndexedMesh*)m_impl;
     return DOMUint8Array::create(impl->m_triangleIndexBase, impl->m_triangleIndexStride * impl->m_numTriangles).get();

}

void btIndexedMeshB:: set_m_triangleIndexBase(DOMInt32Array* array) {
    btIndexedMesh *impl = (btIndexedMesh*)m_impl;
    impl->m_triangleIndexBase = (const unsigned char*) (array->baseAddress());
    impl->m_triangleIndexStride = 4*3;
    impl->m_indexType = PHY_INTEGER;
}

void btIndexedMeshB:: set_m_triangleIndexBase(DOMInt16Array* array) {
    btIndexedMesh *impl = (btIndexedMesh*)m_impl;
    impl->m_triangleIndexBase = (const unsigned char*) (array->baseAddress());
    impl->m_triangleIndexStride = 2*3;
    impl->m_indexType = PHY_SHORT;

}

void btIndexedMeshB:: set_m_triangleIndexBase(DOMUint8Array* array) {
    btIndexedMesh *impl = (btIndexedMesh*)m_impl;
    impl->m_triangleIndexBase = (const unsigned char*) array->baseAddress();
    impl->m_triangleIndexStride = 3;
    impl->m_indexType = PHY_UCHAR;

}

void btIndexedMeshB:: set_m_triangleIndexBase(DOMFloat32Array* array){
    btIndexedMesh *impl = (btIndexedMesh*)m_impl;
    impl->m_triangleIndexBase = (const unsigned char*) array->baseAddress();
    impl->m_triangleIndexStride = 4*3;
    impl->m_indexType = PHY_FLOAT;

}

void btIndexedMeshB:: set_m_triangleIndexBase(DOMFloat64Array* array) {
    btIndexedMesh *impl = (btIndexedMesh*)m_impl;
    impl->m_triangleIndexBase = (const unsigned char*) array->baseAddress();
    impl->m_triangleIndexStride = 8*3;
    impl->m_indexType = PHY_DOUBLE;
}

DOMUint8Array*  btIndexedMeshB:: m_vertexBase(){
    btIndexedMesh *impl = (btIndexedMesh*)m_impl;
    return DOMUint8Array::create(impl->m_vertexBase, impl->m_vertexStride * impl->m_numVertices).get();
}

void btIndexedMeshB:: set_m_vertexBase(DOMInt32Array* array){
    btIndexedMesh *impl    = (btIndexedMesh*)m_impl;
    impl->m_vertexBase   = (const unsigned char*) array->baseAddress();
    impl->m_vertexStride = 4;
    impl->m_vertexType   = PHY_INTEGER;
}

void btIndexedMeshB:: set_m_vertexBase(DOMInt16Array* array) {
    btIndexedMesh *impl    = (btIndexedMesh*)m_impl;
    impl->m_vertexBase   = (const unsigned char*) array->baseAddress();
    impl->m_vertexStride = 2;
    impl->m_vertexType   = PHY_SHORT;
}

void btIndexedMeshB:: set_m_vertexBase(DOMUint8Array* array) {
    btIndexedMesh *impl    = (btIndexedMesh*)m_impl;
    impl->m_vertexBase   = (const unsigned char*) array->baseAddress();
    impl->m_vertexStride = 1;
    impl->m_vertexType   = PHY_UCHAR;
}


void btIndexedMeshB:: set_m_vertexBase(DOMFloat32Array* array) {
    btIndexedMesh *impl    = (btIndexedMesh*)m_impl;
    impl->m_vertexBase   = (const unsigned char*) array->baseAddress();
    impl->m_vertexStride = 4;
    impl->m_vertexType   = PHY_FLOAT;
}

void btIndexedMeshB:: set_m_vertexBase(DOMFloat64Array* array) {
    btIndexedMesh *impl    = (btIndexedMesh*)m_impl;
    impl->m_vertexBase   = (const unsigned char*) array->baseAddress();
    impl->m_vertexStride = 8;
    impl->m_vertexType   = PHY_DOUBLE;
}

int btIndexedMeshB:: m_triangleIndexStride() {
    btIndexedMesh *impl = (btIndexedMesh*)m_impl;
    return impl->m_triangleIndexStride;
}

void btIndexedMeshB:: set_m_triangleIndexStride(int stride) {
    btIndexedMesh *impl = (btIndexedMesh*)m_impl;
    impl->m_triangleIndexStride = stride;
}

int btIndexedMeshB:: m_vertexStride() {
    btIndexedMesh *impl = (btIndexedMesh*)m_impl;
    return impl->m_vertexStride;
}

void btIndexedMeshB:: set_m_vertexStride(int stride) {
    btIndexedMesh *impl = (btIndexedMesh*)m_impl;
    impl->m_vertexStride = stride;
}


}
