#ifndef btGeneric6DofConstraintB_h
#define btGeneric6DofConstraintB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btTypedConstraintB.h"
#include "btRigidBodyB.h"
#include "btTransformB.h"
#include "btVector3B.h"

namespace blink {
class btGeneric6DofConstraintB: public btTypedConstraintB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btGeneric6DofConstraintB* create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* frameInA, btTransformB* frameInB, bool useLinearFrameReferenceFrameA);
    static btGeneric6DofConstraintB* create(btRigidBodyB* rbB, btTransformB* frameInB, bool useLinearFrameReferenceFrameB);
    virtual ~btGeneric6DofConstraintB();
    btGeneric6DofConstraintB();
    void setLinearLowerLimit(btVector3B* linearLower);
    void setLinearUpperLimit(btVector3B* linearUpper);
    void setAngularLowerLimit(btVector3B* angularLower);
    void setAngularUpperLimit(btVector3B* angularUpper);
};
}
#endif