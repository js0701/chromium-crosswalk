#ifndef btPoint2PointConstraintB_h
#define btPoint2PointConstraintB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btTypedConstraintB.h"
#include "btRigidBodyB.h"
#include "btVector3B.h"
#include "btConstraintSettingB.h"

namespace blink {
class btPoint2PointConstraintB: public btTypedConstraintB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btPoint2PointConstraintB* create(btRigidBodyB* rbA, btRigidBodyB* rbB, btVector3B* pivotInA, btVector3B* pivotInB);
    static btPoint2PointConstraintB* create(btRigidBodyB* rbA, btVector3B* pivotInA);
    virtual ~btPoint2PointConstraintB();
    btPoint2PointConstraintB();
    void setPivotA(btVector3B* pivotA);
    void setPivotB(btVector3B* pivotB);
    btVector3B* getPivotInA();
    btVector3B* getPivotInB();
    void setM_setting(btConstraintSettingB* value);
    btConstraintSettingB* m_setting();
////DEFINE_INLINE_TRACE() {}
};
}
#endif