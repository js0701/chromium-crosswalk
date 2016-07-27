#ifndef btSliderConstraintB_h
#define btSliderConstraintB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btTypedConstraintB.h"
#include "btRigidBodyB.h"
#include "btTransformB.h"
namespace blink {
class btSliderConstraintB: public btTypedConstraintB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btSliderConstraintB* create(btRigidBodyB* rbA, btRigidBodyB* rbB, btTransformB* frameInA, btTransformB* frameInB, bool useLinearReferenceFrameA);
    static btSliderConstraintB* create(btRigidBodyB* rbB, btTransformB* frameInB, bool uesLinearReferenceFrameA);
    virtual ~btSliderConstraintB();
    btSliderConstraintB();
    void setLowerLinLimit(float lowerLimit);
    void setUpperLinLimit(float upperLimit);
    void setLowerAngLimit(float lowerAngLimit);
    void setUpperAngLimit(float upperAngLimit);
////DEFINE_INLINE_TRACE() {}
};
}
#endif