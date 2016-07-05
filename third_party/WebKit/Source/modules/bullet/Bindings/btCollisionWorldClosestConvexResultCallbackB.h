#ifndef btCollisionWorldClosestConvexResultCallbackB_h
#define btCollisionWorldClosestConvexResultCallbackB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionWorldConvexResultCallbackB.h"
#include "btVector3B.h"
namespace blink {
class btCollisionWorldClosestConvexResultCallbackB: public btCollisionWorldConvexResultCallbackB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btCollisionWorldClosestConvexResultCallbackB* create(btVector3B* convexFromWorld, btVector3B* convexToWorld);
    virtual ~btCollisionWorldClosestConvexResultCallbackB();
    btCollisionWorldClosestConvexResultCallbackB();
    void setM_convexFromWorld(btVector3B* value);
    btVector3B* m_convexFromWorld();
    void setM_convexToWorld(btVector3B* value);
    btVector3B* m_convexToWorld();
    void setM_hitNormalWorld(btVector3B* value);
    btVector3B* m_hitNormalWorld();
    void setM_hitPointWorld(btVector3B* value);
    btVector3B* m_hitPointWorld();
DEFINE_INLINE_TRACE() {}
};
}
#endif