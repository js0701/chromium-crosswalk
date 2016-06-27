#ifndef btConeShapeXB_h
#define btConeShapeXB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btConeShapeB.h"
namespace blink {
class btConeShapeXB: public btConeShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btConeShapeXB* create(float radius, float height);
    ~btConeShapeXB();
    btConeShapeXB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif