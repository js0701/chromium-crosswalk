#ifndef btCollisionShapeB_h
#define btCollisionShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btVector3B.h"
namespace blink {
class btCollisionShapeB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btCollisionShapeB();
    btCollisionShapeB();
    void setLocalScaling(btVector3B* scaling);
    void calculateLocalInertia(float mass, btVector3B* inertia);
//DEFINE_INLINE_TRACE() {}
};
}
#endif