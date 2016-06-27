#ifndef btOverlappingPairCallbackB_h
#define btOverlappingPairCallbackB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btOverlappingPairCallbackB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    ~btOverlappingPairCallbackB();
    btOverlappingPairCallbackB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif