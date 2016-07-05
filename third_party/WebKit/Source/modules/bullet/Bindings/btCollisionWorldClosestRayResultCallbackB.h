#ifndef btCollisionWorldClosestRayResultCallbackB_h
#define btCollisionWorldClosestRayResultCallbackB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionWorldRayResultCallbackB.h"
#include "btVector3B.h"
namespace blink {
class btCollisionWorldClosestRayResultCallbackB: public btCollisionWorldRayResultCallbackB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btCollisionWorldClosestRayResultCallbackB* create(btVector3B* from, btVector3B* to);
    virtual ~btCollisionWorldClosestRayResultCallbackB();
    btCollisionWorldClosestRayResultCallbackB();
    void setM_rayFromWorld(btVector3B* value);
    btVector3B* m_rayFromWorld();
    void setM_rayToWorld(btVector3B* value);
    btVector3B* m_rayToWorld();
    void setM_hitNormalWorld(btVector3B* value);
    btVector3B* m_hitNormalWorld();
    void setM_hitPointWorld(btVector3B* value);
    btVector3B* m_hitPointWorld();
//DEFINE_INLINE_TRACE() {}
};
}
#endif