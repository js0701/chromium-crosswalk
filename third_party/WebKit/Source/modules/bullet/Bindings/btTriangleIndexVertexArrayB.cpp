#include "config.h"
#include "btTriangleIndexVertexArrayB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {

static PHY_ScalarType StringToScalarType(const String& string)
{
    const char* str = string.utf8().data();

    if(strcmp(str, "PHY_FLOAT") == 0)
        return PHY_FLOAT;
    
    if(strcmp(str, "PHY_DOUBLE") == 0)
        return PHY_DOUBLE;

    if(strcmp(str, "PHY_INTEGER") == 0)
        return PHY_DOUBLE;
    
    if(strcmp(str, "PHY_SHORT") == 0)
        return PHY_INTEGER;

    if(strcmp(str, "PHY_FIXEDPOINT88") == 0)
        return PHY_FIXEDPOINT88;

    if(strcmp(str, "PHY_UCHAR") == 0)
        return PHY_UCHAR;

    return PHY_FLOAT;

}


btTriangleIndexVertexArrayB* btTriangleIndexVertexArrayB:: create() {
   btTriangleIndexVertexArrayB* wrapper = new btTriangleIndexVertexArrayB();
   btTriangleIndexVertexArray* impl = new btTriangleIndexVertexArray();
   wrapper->setImpl(impl, true);
   return wrapper;

}


btTriangleIndexVertexArrayB:: btTriangleIndexVertexArrayB() {}

btTriangleIndexVertexArrayB:: ~btTriangleIndexVertexArrayB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btTriangleIndexVertexArray*) m_impl;
    }
    m_impl = NULL;
}

void btTriangleIndexVertexArrayB:: addIndexedMesh(btIndexedMeshB* mesh, const String& indexType) {
     btTriangleIndexVertexArray* impl = (btTriangleIndexVertexArray*) m_impl;
     btIndexedMesh* impl_mesh  = (btIndexedMesh*) mesh->getImpl();
     PHY_ScalarType scalarType = StringToScalarType(indexType);

     impl->addIndexedMesh(*impl_mesh, scalarType);

     setRef(mesh);
}


}
