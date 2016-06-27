#ifndef btGeneric6DofSpringConstraintB_h
#define btGeneric6DofSpringConstraintB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btGeneric6DofConstraintB.h"
#include "btRigidBodyB.h"
#include "btTransformB.h"
namespace blink {
class btGeneric6DofSpringConstraintB: public btGeneric6DofConstraintB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btGeneric6DofSpringConstraintB* create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* frameInA, btTransformB* frameInB, bool useLinearFrameReferenceFrameA);
    static btGeneric6DofSpringConstraintB* create(btRigidBodyB* rbB, btTransformB* frameInB, bool useLinearFrameReferenceFrameB);
    ~btGeneric6DofSpringConstraintB();
    btGeneric6DofSpringConstraintB();
    void enableSpring(long index, bool onOff);
    void setStiffness(long index, float stiffness);
    void setDamping(long index, float damping);
DEFINE_INLINE_TRACE() {}
};
}
#endif