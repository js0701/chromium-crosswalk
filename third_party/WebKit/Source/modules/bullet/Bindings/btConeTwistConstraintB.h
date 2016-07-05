#ifndef btConeTwistConstraintB_h
#define btConeTwistConstraintB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btTypedConstraintB.h"
#include "btRigidBodyB.h"
#include "btTransformB.h"
#include "btQuaternionB.h"

namespace blink {
class btConeTwistConstraintB: public btTypedConstraintB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btConeTwistConstraintB* create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* rbAFrame, btTransformB* rbBFrame);
    static btConeTwistConstraintB* create(btRigidBodyB* rbA, btTransformB* rbAFrame);
    virtual ~btConeTwistConstraintB();
    btConeTwistConstraintB();
    void setLimit(long limitIndex, float limitValue);
    void setAngularOnly(bool angularOnly);
    void setDamping(float damping);
    void enableMotor(bool b);
    void setMaxMotorImpulse(float maxMotorImpulse);
    void setMaxMotorImpulseNormalized(float maxMotorImpulse);
    void setMotorTarget(btQuaternionB* q);
    void setMotorTargetInConstraintSpace(btQuaternionB* q);
//DEFINE_INLINE_TRACE() {}
};
}
#endif