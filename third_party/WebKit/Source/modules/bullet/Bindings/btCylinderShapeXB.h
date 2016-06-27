#ifndef btCylinderShapeXB_h
#define btCylinderShapeXB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCylinderShapeB.h"
#include "btVector3B.h"
namespace blink {
class btCylinderShapeXB: public btCylinderShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btCylinderShapeXB* create(btVector3B* halfExtents);
    ~btCylinderShapeXB();
    btCylinderShapeXB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif