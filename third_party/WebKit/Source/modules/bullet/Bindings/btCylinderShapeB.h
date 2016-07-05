#ifndef btCylinderShapeB_h
#define btCylinderShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionShapeB.h"
#include "btVector3B.h"
namespace blink {
class btCylinderShapeB: public btCollisionShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btCylinderShapeB* create(btVector3B* halfExtents);
    virtual ~btCylinderShapeB();
    btCylinderShapeB();
    void setMargin(float margin);
    float getMargin();
//DEFINE_INLINE_TRACE() {}
};
}
#endif