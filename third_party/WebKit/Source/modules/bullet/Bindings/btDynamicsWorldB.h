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

    void addVehicle(btActionInterfaceB* vehicle);
    void removeVehicle(btActionInterfaceB* vehicle);
    
    void clearForces();
    btContactSolverInfoB* getSolverInfo();
    
    //DEFINE_INLINE_TRACE() {visitor->trace(m_refedWrappersVector); visitor->trace(m_refedWrappersMap);
};
}
#endif