#ifndef btContactSolverInfoB_h
#define btContactSolverInfoB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btContactSolverInfoB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btContactSolverInfoB();
    btContactSolverInfoB();
    void setM_splitImpulse(bool value);
    bool m_splitImpulse();
    void setM_splitImpulsePenetrationThreshold(long value);
    long m_splitImpulsePenetrationThreshold();
////DEFINE_INLINE_TRACE() {}
};
}
#endif