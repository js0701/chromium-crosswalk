#ifndef btDispatcherB_h
#define btDispatcherB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btPersistentManifoldB.h"
namespace blink {
class btDispatcherB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btDispatcherB();
    btDispatcherB();
    long getNumManifolds();
    btPersistentManifoldB* getManifoldByIndexInternal(long index);
////DEFINE_INLINE_TRACE() {}
};
}
#endif