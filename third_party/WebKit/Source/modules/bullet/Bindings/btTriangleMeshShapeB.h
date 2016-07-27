#ifndef btTriangleMeshShapeB_h
#define btTriangleMeshShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btConcaveShapeB.h"
namespace blink {
class btTriangleMeshShapeB: public btConcaveShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btTriangleMeshShapeB();
    btTriangleMeshShapeB();
////DEFINE_INLINE_TRACE() {}
};
}
#endif