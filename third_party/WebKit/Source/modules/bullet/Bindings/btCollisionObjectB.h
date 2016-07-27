#ifndef btCollisionObjectB_h
#define btCollisionObjectB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btVector3B.h"
#include "btCollisionShapeB.h"
#include "btTransformB.h"
namespace blink {
class btCollisionObjectB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btCollisionObjectB();
    btCollisionObjectB();
    void setAnisotropicFriction(btVector3B* anisotropicFriction, long frictionMode);
    btCollisionShapeB* getCollisionShape();
    void setContactProcessingThreshold(float contactProcessingThreshold);
    void setActivationState(long newState);
    void forceActivationState(long newState);
    void activate();
    void activate(bool forceActivation);
    bool isActive();
    bool isKinematicObject();
    void setRestitution(float rest);
    void setFriction(float frict);
    void setRollingFriction(float frict);
    btTransformB* getWorldTransform();
    long getCollisionFlags();
    void setCollisionFlags(long flags);
    void setWorldTransform(btTransformB* worldTrans);
    void setCollisionShape(btCollisionShapeB* collisionShape);
    void setCcdMotionThreshold(float ccdMotionThreshold);
    void setCcdSweptSphereRadius(float radius);
////DEFINE_INLINE_TRACE() {}
};
}
#endif