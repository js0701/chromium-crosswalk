#ifndef btStaticPlaneShapeB_h
#define btStaticPlaneShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btConcaveShapeB.h"
#include "btVector3B.h"
namespace blink {
class btStaticPlaneShapeB: public btConcaveShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btStaticPlaneShapeB* create(btVector3B* planeNormal, float planeConstant);
    virtual ~btStaticPlaneShapeB();
    btStaticPlaneShapeB();
////DEFINE_INLINE_TRACE() {}
};
}
#endif