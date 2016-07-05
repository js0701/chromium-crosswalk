#ifndef btHingeConstraintB_h
#define btHingeConstraintB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btTypedConstraintB.h"
#include "btRigidBodyB.h"
#include "btVector3B.h"
#include "btTransformB.h"
namespace blink {
class btHingeConstraintB: public btTypedConstraintB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btHingeConstraintB* create(btRigidBodyB* rbA, btRigidBodyB* rbB, btVector3B* pivotInA, btVector3B* pivotInB, btVector3B* axisInA, btVector3B* axisInB);
    static btHingeConstraintB* create(btRigidBodyB* rbA, btRigidBodyB* rbB, btVector3B* pivotInA, btVector3B* pivotInB, btVector3B* axisInA, btVector3B* axisInB, bool useReferenceFrameA);
    static btHingeConstraintB* create(btRigidBodyB* rbA, btVector3B* pivotInA, btVector3B* axisInA);
    static btHingeConstraintB* create(btRigidBodyB* rbA, btVector3B* pivotInA, btVector3B* axisInA, bool useReferenceFrameA);
    static btHingeConstraintB* create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* rbAFrame, btTransformB* rbBFrame);
    static btHingeConstraintB* create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* rbAFrame, btTransformB* rbBFrame, bool useReferenceFrameA);
    static btHingeConstraintB* create(btRigidBodyB* rbA, btTransformB* rbAFrame);
    static btHingeConstraintB* create(btRigidBodyB* rbA, btTransformB* rbAFrame, bool useReferenceFrameA);
    virtual ~btHingeConstraintB();
    btHingeConstraintB();
    void setLimit(float low, float high, float softness, float biasFactor);
    void setLimit(float low, float high, float softness, float biasFactor, float relaxationFactor);
    void enableAngularMotor(bool enableMotor, float targetVelocity, float maxMotorImpulse);
//DEFINE_INLINE_TRACE() {}
};
}
#endif