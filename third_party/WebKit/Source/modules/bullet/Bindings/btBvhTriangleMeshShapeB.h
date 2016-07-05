#ifndef btBvhTriangleMeshShapeB_h
#define btBvhTriangleMeshShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btTriangleMeshShapeB.h"
#include "btStridingMeshInterfaceB.h"
namespace blink {
class btBvhTriangleMeshShapeB: public btTriangleMeshShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btBvhTriangleMeshShapeB* create(btStridingMeshInterfaceB* meshInterface, bool useQuantizedAabbCompression);
    static btBvhTriangleMeshShapeB* create(btStridingMeshInterfaceB* meshInterface, bool useQuantizedAabbCompression, bool buildBvh);
    virtual ~btBvhTriangleMeshShapeB();
    btBvhTriangleMeshShapeB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif