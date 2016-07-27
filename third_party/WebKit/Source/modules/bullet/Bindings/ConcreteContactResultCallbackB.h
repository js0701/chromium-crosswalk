#ifndef ConcreteContactResultCallbackB_h
#define ConcreteContactResultCallbackB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btCollisionObjectWrapperB.h"
#include "btManifoldPointB.h"

namespace blink {
class ConcreteContactResultCallbackB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static ConcreteContactResultCallbackB* create();
    ~ConcreteContactResultCallbackB();
    ConcreteContactResultCallbackB();
    void ConcreteContactResultCallback();
    float addSingleResult(btManifoldPointB* cp, btCollisionObjectWrapperB* colObj0Wrap, long partId0, long index0, btCollisionObjectWrapperB* colObj1Wrap, long partId1, long index1);
//DEFINE_INLINE_TRACE() {}
};
}
#endif