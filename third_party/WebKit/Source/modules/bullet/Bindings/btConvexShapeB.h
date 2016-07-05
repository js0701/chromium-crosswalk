#ifndef btConvexShapeB_h
#define btConvexShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionShapeB.h"
namespace blink {
class btConvexShapeB: public btCollisionShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btConvexShapeB();
    btConvexShapeB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif