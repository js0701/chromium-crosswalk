#ifndef btWheelInfoB_h
#define btWheelInfoB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btWheelInfoRaycastInfoB.h"
#include "btVector3B.h"
namespace blink {
class btWheelInfoB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btWheelInfoB();
    btWheelInfoB();
    void set_m_suspensionStiffness(float value);
    float m_suspensionStiffness();
    void set_m_frictionSlip(float value);
    float m_frictionSlip();
    void set_m_engineForce(float value);
    float m_engineForce();
    void set_m_rollInfluence(float value);
    float m_rollInfluence();
    void set_m_suspensionRestLength1(float value);
    float m_suspensionRestLength1();
    void set_m_wheelsRadius(float value);
    float m_wheelsRadius();
    void set_m_wheelsDampingCompression(float value);
    float m_wheelsDampingCompression();
    void set_m_wheelsDampingRelaxation(float value);
    float m_wheelsDampingRelaxation();
    void set_m_steering(float value);
    float m_steering();
    void set_m_maxSuspensionForce(float value);
    float m_maxSuspensionForce();
    void set_m_maxSuspensionTravelCm(float value);
    float m_maxSuspensionTravelCm();
    void set_m_wheelsSuspensionForce(float value);
    float m_wheelsSuspensionForce();
    void set_m_bIsFrontWheel(bool value);
    bool m_bIsFrontWheel();
    void set_m_raycastInfo(btWheelInfoRaycastInfoB* raycastInfo);
    btWheelInfoRaycastInfoB* m_raycastInfo();
    void set_m_chassisConnectionPointCS(btVector3B* point);
    btVector3B* m_chassisConnectionPointCS();
////DEFINE_INLINE_TRACE() {}
};
}
#endif