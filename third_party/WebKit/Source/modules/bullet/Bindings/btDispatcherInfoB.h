#ifndef btDispatcherInfoB_h
#define btDispatcherInfoB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btDispatcherInfoB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btDispatcherInfoB();
    btDispatcherInfoB();
    void setM_timeStep(float value);
    float m_timeStep();
    void setM_stepCount(long value);
    long m_stepCount();
    void setM_dispatchFunc(long value);
    long m_dispatchFunc();
    void setM_timeOfImpact(float value);
    float m_timeOfImpact();
    void setM_useContinuous(bool value);
    bool m_useContinuous();
    void setM_enableSatConvex(bool value);
    bool m_enableSatConvex();
    void setM_enableSPU(bool value);
    bool m_enableSPU();
    void setM_useEpa(bool value);
    bool m_useEpa();
    void setM_allowedCcdPenetration(float value);
    float m_allowedCcdPenetration();
    void setM_useConvexConservativeDistanceUtil(bool value);
    bool m_useConvexConservativeDistanceUtil();
    void setM_convexConservativeDistanceThreshold(float value);
    float m_convexConservativeDistanceThreshold();
////DEFINE_INLINE_TRACE() {}
};
}
#endif