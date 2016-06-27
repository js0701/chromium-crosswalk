#ifndef btCylinderShapeZB_h
#define btCylinderShapeZB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCylinderShapeB.h"
#include "btVector3B.h"
namespace blink {
class btCylinderShapeZB: public btCylinderShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btCylinderShapeZB* create(btVector3B* halfExtents);
    ~btCylinderShapeZB();
    btCylinderShapeZB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif