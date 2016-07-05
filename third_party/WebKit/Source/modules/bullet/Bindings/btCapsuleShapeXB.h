#ifndef btCapsuleShapeXB_h
#define btCapsuleShapeXB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCapsuleShapeB.h"
namespace blink {
class btCapsuleShapeXB: public btCapsuleShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btCapsuleShapeXB* create(float radius, float height);
    virtual ~btCapsuleShapeXB();
    btCapsuleShapeXB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif