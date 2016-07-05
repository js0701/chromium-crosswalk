#ifndef btCollisionWorldConvexResultCallbackB_h
#define btCollisionWorldConvexResultCallbackB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btCollisionWorldConvexResultCallbackB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btCollisionWorldConvexResultCallbackB();
    btCollisionWorldConvexResultCallbackB();
    bool hasHit();
    void setM_collisionFilterGroup(short value);
    short m_collisionFilterGroup();
    void setM_collisionFilterMask(short value);
    short m_collisionFilterMask();
    void setM_closestHitFraction(float value);
    float m_closestHitFraction();
//DEFINE_INLINE_TRACE() {}
};
}
#endif