#ifndef btConeShapeB_h
#define btConeShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionShapeB.h"
namespace blink {
class btConeShapeB: public btCollisionShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btConeShapeB* create(float radius, float height);
    virtual ~btConeShapeB();
    btConeShapeB();
////DEFINE_INLINE_TRACE() {}
};
}
#endif