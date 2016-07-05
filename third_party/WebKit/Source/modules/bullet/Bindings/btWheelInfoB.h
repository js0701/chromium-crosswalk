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
    void setM_suspensionStiffness(float value);
    float m_suspensionStiffness();
    void setM_frictionSlip(float value);
    float m_frictionSlip();
    void setM_engineForce(float value);
    float m_engineForce();
    void setM_rollInfluence(float value);
    float m_rollInfluence();
    void setM_suspensionRestLength1(float value);
    float m_suspensionRestLength1();
    void setM_wheelsRadius(float value);
    float m_wheelsRadius();
    void setM_wheelsDampingCompression(float value);
    float m_wheelsDampingCompression();
    void setM_wheelsDampingRelaxation(float value);
    float m_wheelsDampingRelaxation();
    void setM_steering(float value);
    float m_steering();
    void setM_maxSuspensionForce(float value);
    float m_maxSuspensionForce();
    void setM_maxSuspensionTravelCm(float value);
    float m_maxSuspensionTravelCm();
    void setM_wheelsSuspensionForce(float value);
    float m_wheelsSuspensionForce();
    void setM_bIsFrontWheel(bool value);
    bool m_bIsFrontWheel();
    void setM_raycastInfo(btWheelInfoRaycastInfoB* value);
    btWheelInfoRaycastInfoB* m_raycastInfo();
    void setM_chassisConnectionPointCS(btVector3B* value);
    btVector3B* m_chassisConnectionPointCS();
//DEFINE_INLINE_TRACE() {}
};
}
#endif