#ifndef btCollisionWorldRayResultCallbackB_h
#define btCollisionWorldRayResultCallbackB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btCollisionObjectB.h"
namespace blink {
class btCollisionWorldRayResultCallbackB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    ~btCollisionWorldRayResultCallbackB();
    btCollisionWorldRayResultCallbackB();
    bool hasHit();
    void setM_collisionFilterGroup(short value);
    short m_collisionFilterGroup();
    void setM_collisionFilterMask(short value);
    short m_collisionFilterMask();
    void setM_collisionObject(btCollisionObjectB* value);
    btCollisionObjectB* m_collisionObject();
//DEFINE_INLINE_TRACE() {}
};
}
#endif