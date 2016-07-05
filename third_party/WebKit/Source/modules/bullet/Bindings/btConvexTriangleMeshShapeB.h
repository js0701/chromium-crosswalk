#ifndef btConvexTriangleMeshShapeB_h
#define btConvexTriangleMeshShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btConvexShapeB.h"
#include "btStridingMeshInterfaceB.h"
namespace blink {
class btConvexTriangleMeshShapeB: public btConvexShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btConvexTriangleMeshShapeB* create(btStridingMeshInterfaceB* meshInterface);
    static btConvexTriangleMeshShapeB* create(btStridingMeshInterfaceB* meshInterface, bool calcAabb);
    virtual ~btConvexTriangleMeshShapeB();
    btConvexTriangleMeshShapeB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif