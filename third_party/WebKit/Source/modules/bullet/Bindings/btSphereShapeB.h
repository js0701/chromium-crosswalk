#ifndef btSphereShapeB_h
#define btSphereShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionShapeB.h"
namespace blink {
class btSphereShapeB: public btCollisionShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btSphereShapeB* create(float radius);
    ~btSphereShapeB();
    btSphereShapeB();
    void setMargin(float margin);
    float getMargin();
//DEFINE_INLINE_TRACE() {}
};
}
#endif