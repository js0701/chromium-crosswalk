#ifndef btDynamicsWorldB_h
#define btDynamicsWorldB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionWorldB.h"
#include "btActionInterfaceB.h"
#include "btContactSolverInfoB.h"
namespace blink {
class btDynamicsWorldB: public btCollisionWorldB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btDynamicsWorldB();
    btDynamicsWorldB();
    void addAction(btActionInterfaceB* action);
    void removeAction(btActionInterfaceB* action);
    void clearForces();
    btContactSolverInfoB* getSolverInfo();
//DEFINE_INLINE_TRACE() {}
};
}
#endif