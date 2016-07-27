#ifndef btBoxShapeB_h
#define btBoxShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionShapeB.h"
#include "btVector3B.h"
namespace blink {
class btBoxShapeB: public btCollisionShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btBoxShapeB* create(btVector3B* boxHalfExtents);
    static btBoxShapeB* create(float x, float y, float z);
    virtual ~btBoxShapeB();
    btBoxShapeB();
    void setMargin(float margin);
    float getMargin();
    ////DEFINE_INLINE_TRACE() {}
};
}
#endif