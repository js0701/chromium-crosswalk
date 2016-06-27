#ifndef btDbvtBroadphase_h
#define btDbvtBroadphase_h
#include "bindings/core/v8/ScriptWrappable.h
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btDbvtBroadphase: public GarbageCollectedFinalized<btDbvtBroadphase>,public ScriptWrappable,public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btDbvtBroadphase* Create();
    ~btDbvtBroadphase();
    btDbvtBroadphase();
};
}
#endif