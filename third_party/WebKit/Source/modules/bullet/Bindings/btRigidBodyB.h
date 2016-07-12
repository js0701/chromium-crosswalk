#ifndef btRigidBodyB_h
#define btRigidBodyB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionObjectB.h"
#include "btRigidBodyConstructionInfoB.h"
#include "btTransformB.h"
#include "btVector3B.h"
#include "btMotionStateB.h"
namespace blink {
class btRigidBodyB: public btCollisionObjectB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btRigidBodyB* create(btRigidBodyConstructionInfoB* constructionInfo);
    virtual ~btRigidBodyB();
    btRigidBodyB();
    void clearForces();
    btTransformB* getCenterOfMassTransform();
    void setCenterOfMassTransform(btTransformB* xform);
    void setSleepingThresholds(float linear, float angular);
    void setDamping(float lin_damping, float ang_damping);
    void setMassProps(float mass, btVector3B* inertia);
    void setLinearFactor(btVector3B* linearFactor);
    void applyTorque(btVector3B* torque);
   // void applyLocalTorque(btVector3B* torque);
    void applyForce(btVector3B* force, btVector3B* rel_pos);
    void applyCentralForce(btVector3B* force);
  //  void applyCentralLocalForce(btVector3B* force);
    void applyTorqueImpulse(btVector3B* torque);
    void applyImpulse(btVector3B* impulse, btVector3B* rel_pos);
    void applyCentralImpulse(btVector3B* impulse);
    void updateInertiaTensor();
    btVector3B* getLinearVelocity();
    btVector3B* getAngularVelocity();
    void setLinearVelocity(btVector3B* lin_vel);
    void setAngularVelocity(btVector3B* ang_vel);
    btMotionStateB* getMotionState();
    void setMotionState(btMotionStateB* motionState);
    void setAngularFactor(btVector3B* angularFactor);
    btRigidBodyB* upcast(btCollisionObjectB* colObj);
//DEFINE_INLINE_TRACE() {}
};
}
#endif