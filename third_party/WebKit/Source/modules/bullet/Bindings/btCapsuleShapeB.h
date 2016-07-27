#ifndef btCapsuleShapeB_h
#define btCapsuleShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btCapsuleShapeB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btCapsuleShapeB* create(float radius, float height);
    virtual ~btCapsuleShapeB();
    btCapsuleShapeB();
    void setMargin(float margin);
    float getMargin();
////DEFINE_INLINE_TRACE() {}
};
}
#endif