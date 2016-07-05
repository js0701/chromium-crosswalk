#ifndef btMotionStateB_h
#define btMotionStateB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btTransformB.h"
namespace blink {
class btMotionStateB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btMotionStateB();
    btMotionStateB();
    void getWorldTransform(btTransformB* worldTrans);
    void setWorldTransform(btTransformB* worldTrans);
//DEFINE_INLINE_TRACE() {}
};
}
#endif