#ifndef btOverlappingPairCacheB_h
#define btOverlappingPairCacheB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btOverlappingPairCallbackB.h"
namespace blink {
class btOverlappingPairCacheB: public btOverlappingPairCallbackB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btOverlappingPairCacheB();
    btOverlappingPairCacheB();
    void setInternalGhostPairCallback(btOverlappingPairCallbackB* ghostPairCallback);
////DEFINE_INLINE_TRACE() {}
};
}
#endif