#ifndef btKinematicCharacterControllerB_h
#define btKinematicCharacterControllerB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btActionInterfaceB.h"
#include "btPairCachingGhostObjectB.h"
#include "btConvexShapeB.h"
#include "btVector3B.h"
#include "btCollisionWorldB.h"
namespace blink {
class btKinematicCharacterControllerB: public btActionInterfaceB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    //static btKinematicCharacterControllerB* create();
    static btKinematicCharacterControllerB* create(btPairCachingGhostObjectB* ghostObject, btConvexShapeB* convexShape, float stepHeight);
    static btKinematicCharacterControllerB* create(btPairCachingGhostObjectB* ghostObject, btConvexShapeB* convexShape, float stepHeight, long upAxis);
    virtual ~btKinematicCharacterControllerB();
    btKinematicCharacterControllerB();
    void setUpAxis(long axis);
    void setWalkDirection(btVector3B* walkDirection);
    void setVelocityForTimeInterval(btVector3B* velocity, float timeInterval);
    void warp(btVector3B* origin);
    void preStep(btCollisionWorldB* collisionWorld);
    void playerStep(btCollisionWorldB* collisionWorld, float dt);
    void setFallSpeed(float fallSpeed);
    void setJumpSpeed(float jumpSpeed);
    void setMaxJumpHeight(float maxJumpHeight);
    bool canJump();
    void jump();
    void setGravity(float gravity);
    float getGravity();
    void setMaxSlope(float slopeRadians);
    float getMaxSlope();
    btPairCachingGhostObjectB* getGhostObject();
    void setUseGhostSweepTest(bool useGhostObjectSweepTest);
    bool onGround();
//DEFINE_INLINE_TRACE() {}
};
}
#endif