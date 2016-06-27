#ifndef btGhostPairCallbackB_h
#define btGhostPairCallbackB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btOverlappingPairCallbackB.h"

namespace blink {
class btGhostPairCallbackB: public btOverlappingPairCallbackB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btGhostPairCallbackB* create();
    ~btGhostPairCallbackB();
    btGhostPairCallbackB();
};
}
#endif