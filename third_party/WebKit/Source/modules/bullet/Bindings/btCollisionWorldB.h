#ifndef btCollisionWorldB_h
#define btCollisionWorldB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btDispatcherB.h"
#include "btVector3B.h"
#include "btCollisionWorldRayResultCallbackB.h"
#include "btOverlappingPairCacheB.h"
#include "btDispatcherInfoB.h"
#include "btCollisionObjectB.h"
#include "btBroadphaseInterfaceB.h"
#include "btConvexShapeB.h"
#include "btTransformB.h"
#include "btCollisionWorldConvexResultCallbackB.h"
#include "btCollisionWorldContactResultCallbackB.h"
namespace blink {
class btCollisionWorldB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btCollisionWorldB();
    btCollisionWorldB();
    btDispatcherB* getDispatcher();
    void rayTest(btVector3B* rayFromWorld, btVector3B* rayToWorld, btCollisionWorldRayResultCallbackB* resultCallback);
    btOverlappingPairCacheB* getPairCache();
    btDispatcherInfoB* getDispatchInfo();
    void addCollisionObject(btCollisionObjectB* collisionObject);
    void addCollisionObject(btCollisionObjectB* collisionObject, short collisionFilterGroup);
    void addCollisionObject(btCollisionObjectB* collisionObject, short collisionFilterGroup, short collisionFilterMask);
    btBroadphaseInterfaceB* getBroadphase();
    void convexSweepTest(btConvexShapeB* castShape, btTransformB* from, btTransformB* to, btCollisionWorldConvexResultCallbackB* resultCallback, float allowedCcdPenetration);
    void contactPairTest(btCollisionObjectB* colObjA, btCollisionObjectB* colObjB, btCollisionWorldContactResultCallbackB* resultCallback);
    void contactTest(btCollisionObjectB* colObj, btCollisionWorldContactResultCallbackB* resultCallback);
//DEFINE_INLINE_TRACE() {}
};
}
#endif