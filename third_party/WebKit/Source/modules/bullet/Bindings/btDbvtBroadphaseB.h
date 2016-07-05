#ifndef btDbvtBroadphaseB_h
#define btDbvtBroadphaseB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBroadphaseInterfaceB.h"

namespace blink {
class btDbvtBroadphaseB: public btBroadphaseInterfaceB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btDbvtBroadphaseB* create();
    virtual ~btDbvtBroadphaseB();
    btDbvtBroadphaseB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif