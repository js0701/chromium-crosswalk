#ifndef btCollisionWorldContactResultCallbackB_h
#define btCollisionWorldContactResultCallbackB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btCollisionObjectWrapperB.h"
#include "btManifoldPointB.h"
namespace blink {
class btCollisionWorldContactResultCallbackB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    ~btCollisionWorldContactResultCallbackB();
    btCollisionWorldContactResultCallbackB();
    float addSingleResult(btManifoldPointB* cp, btCollisionObjectWrapperB* colObj0Wrap, long partId0, long index0, btCollisionObjectWrapperB* colObj1Wrap, long partId1, long index1);
    //DEFINE_INLINE_TRACE() {}
};
}
#endif