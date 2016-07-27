#ifndef btSequentialImpulseConstraintSolverB_h
#define btSequentialImpulseConstraintSolverB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btConstraintSolverB.h"

namespace blink {
class btSequentialImpulseConstraintSolverB: public btConstraintSolverB {
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btSequentialImpulseConstraintSolverB* create();
    ~btSequentialImpulseConstraintSolverB();
    btSequentialImpulseConstraintSolverB();
////DEFINE_INLINE_TRACE() {}
};
}
#endif