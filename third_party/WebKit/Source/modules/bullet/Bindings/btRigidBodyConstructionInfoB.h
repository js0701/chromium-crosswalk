#ifndef btRigidBodyConstructionInfoB_h
#define btRigidBodyConstructionInfoB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btMotionStateB.h"
#include "btCollisionShapeB.h"
#include "btVector3B.h"
namespace blink {
class btRigidBodyConstructionInfoB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btRigidBodyConstructionInfoB* create(float mass, btMotionStateB* motionState, btCollisionShapeB* collisionShape);
    static btRigidBodyConstructionInfoB* create(float mass, btMotionStateB* motionState, btCollisionShapeB* collisionShape, btVector3B* localInertia);
    virtual ~btRigidBodyConstructionInfoB();
    btRigidBodyConstructionInfoB();
    void setM_linearDamping(float value);
    float m_linearDamping();
    void setM_angularDamping(float value);
    float m_angularDamping();
    void setM_friction(float value);
    float m_friction();
    void setM_rollingFriction(float value);
    float m_rollingFriction();
    void setM_restitution(float value);
    float m_restitution();
    void setM_linearSleepingThreshold(float value);
    float m_linearSleepingThreshold();
    void setM_angularSleepingThreshold(float value);
    float m_angularSleepingThreshold();
    void setM_additionalDamping(bool value);
    bool m_additionalDamping();
    void setM_additionalDampingFactor(float value);
    float m_additionalDampingFactor();
    void setM_additionalLinearDampingThresholdSqr(float value);
    float m_additionalLinearDampingThresholdSqr();
    void setM_additionalAngularDampingThresholdSqr(float value);
    float m_additionalAngularDampingThresholdSqr();
    void setM_additionalAngularDampingFactor(float value);
    float m_additionalAngularDampingFactor();
//DEFINE_INLINE_TRACE() {}
};
}
#endif