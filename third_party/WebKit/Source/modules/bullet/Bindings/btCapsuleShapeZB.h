#ifndef btCapsuleShapeZB_h
#define btCapsuleShapeZB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCapsuleShapeB.h"
namespace blink {
class btCapsuleShapeZB: public btCapsuleShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btCapsuleShapeZB* create(float radius, float height);
    ~btCapsuleShapeZB();
    btCapsuleShapeZB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif