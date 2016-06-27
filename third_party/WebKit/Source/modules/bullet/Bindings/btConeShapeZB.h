#ifndef btConeShapeZB_h
#define btConeShapeZB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btConeShapeB.h"
namespace blink {
class btConeShapeZB: public btConeShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btConeShapeZB* create(float radius, float height);
    ~btConeShapeZB();
    btConeShapeZB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif