#ifndef btVehicleTuningB_h
#define btVehicleTuningB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btVehicleTuningB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btVehicleTuningB* create();
    ~btVehicleTuningB();
    btVehicleTuningB();
    void setM_suspensionStiffness(float value);
    float m_suspensionStiffness();
    void setM_suspensionCompression(float value);
    float m_suspensionCompression();
    void setM_suspensionDamping(float value);
    float m_suspensionDamping();
    void setM_maxSuspensionTravelCm(float value);
    float m_maxSuspensionTravelCm();
    void setM_frictionSlip(float value);
    float m_frictionSlip();
    void setM_maxSuspensionForce(float value);
    float m_maxSuspensionForce();
//DEFINE_INLINE_TRACE() {}
};
}
#endif