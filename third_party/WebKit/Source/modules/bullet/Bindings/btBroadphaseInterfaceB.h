#ifndef btBroadphaseInterfaceB_h
#define btBroadphaseInterfaceB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btBroadphaseInterfaceB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    ~btBroadphaseInterfaceB();
    btBroadphaseInterfaceB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif