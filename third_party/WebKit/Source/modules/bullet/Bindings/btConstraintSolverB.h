#ifndef btConstraintSolverB_h
#define btConstraintSolverB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btConstraintSolverB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btConstraintSolverB();
    btConstraintSolverB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif