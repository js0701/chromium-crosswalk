#ifndef btConvexHullShapeB_h
#define btConvexHullShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionShapeB.h"
#include "btVector3B.h"

namespace blink {
class btConvexHullShapeB: public btCollisionShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btConvexHullShapeB* create();
    ~btConvexHullShapeB();
    btConvexHullShapeB();
    void addPoint(btVector3B* point);
    void addPoint(btVector3B* point, bool recalculateLocalAABB);
    void setMargin(float margin);
    float getMargin();
//DEFINE_INLINE_TRACE() {}
};
}
#endif