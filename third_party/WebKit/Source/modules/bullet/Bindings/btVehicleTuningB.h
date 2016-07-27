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
    virtual ~btVehicleTuningB();
    btVehicleTuningB();
    void set_m_suspensionStiffness(float value);
    float m_suspensionStiffness();
    void set_m_suspensionCompression(float value);
    float m_suspensionCompression();
    void set_m_suspensionDamping(float value);
    float m_suspensionDamping();
    void set_m_maxSuspensionTravelCm(float value);
    float m_maxSuspensionTravelCm();
    void set_m_frictionSlip(float value);
    float m_frictionSlip();
    void set_m_maxSuspensionForce(float value);
    float m_maxSuspensionForce();
////DEFINE_INLINE_TRACE() {}
};
}
#endif