#ifndef btDiscreteDynamicsWorldB_h
#define btDiscreteDynamicsWorldB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btDynamicsWorldB.h"
#include "btDispatcherB.h"
#include "btBroadphaseInterfaceB.h"
#include "btCollisionConfigurationB.h"
#include "btVector3B.h"
#include "btRigidBodyB.h"
#include "btTypedConstraintB.h"
#include "btConstraintSolverB.h"

namespace blink {
class btDiscreteDynamicsWorldB: public btDynamicsWorldB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btDiscreteDynamicsWorldB* create(btDispatcherB* dispatcher, btBroadphaseInterfaceB* pairCache, btConstraintSolverB* constraintSolver, btCollisionConfigurationB* collisionConfiguration);
    ~btDiscreteDynamicsWorldB();
    btDiscreteDynamicsWorldB();
    void setGravity(btVector3B* gravity);
    btVector3B* getGravity();
    void addRigidBody(btRigidBodyB* body);
    void addRigidBody(btRigidBodyB* body, short group, short mask);
    void removeRigidBody(btRigidBodyB* body);
    void addConstraint(btTypedConstraintB* constraint);
    void addConstraint(btTypedConstraintB* constraint, bool disableCollisionsBetweenLinkedBodies);
    void removeConstraint(btTypedConstraintB* constraint);
    long stepSimulation(float timeStep);
    long stepSimulation(float timeStep, long maxSubSteps);
    long stepSimulation(float timeStep, long maxSubSteps, float fixedTimeStep);
//DEFINE_INLINE_TRACE() {}
};
}
#endif