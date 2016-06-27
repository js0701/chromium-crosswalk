#ifndef btOverlappingPairCallback_h
#define btOverlappingPairCallback_h
#include "bindings/core/v8/ScriptWrappable.h
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btOverlappingPairCallback: public GarbageCollectedFinalized<btOverlappingPairCallback>,public ScriptWrappable,public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    ~btOverlappingPairCallback();
    btOverlappingPairCallback();
};
}
#endif