#ifndef btConcaveShapeB_h
#define btConcaveShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionShapeB.h"
namespace blink {
class btConcaveShapeB: public btCollisionShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btConcaveShapeB();
    btConcaveShapeB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif