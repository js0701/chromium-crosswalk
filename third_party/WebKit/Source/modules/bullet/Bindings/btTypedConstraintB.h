#ifndef btTypedConstraintB_h
#define btTypedConstraintB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btTypedConstraintB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btTypedConstraintB();
    btTypedConstraintB();
    void enableFeedback(bool needsFeedback);
    float getBreakingImpulseThreshold();
    void setBreakingImpulseThreshold(float threshold);
//DEFINE_INLINE_TRACE() {}
};
}
#endif