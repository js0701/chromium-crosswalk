#ifndef btTriangleMeshB_h
#define btTriangleMeshB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btStridingMeshInterfaceB.h"
#include "btVector3B.h"
namespace blink {
class btTriangleMeshB: public btStridingMeshInterfaceB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btTriangleMeshB* create();
    static btTriangleMeshB* create(bool use32bitIndices);
    static btTriangleMeshB* create(bool use32bitIndices, bool use4componentVertices);
    ~btTriangleMeshB();
    btTriangleMeshB();
    void addTriangle(btVector3B* vertex0, btVector3B* vertex1, btVector3B* vertex2);
    void addTriangle(btVector3B* vertex0, btVector3B* vertex1, btVector3B* vertex2, bool removeDuplicateVertices);
//DEFINE_INLINE_TRACE() {}
};
}
#endif