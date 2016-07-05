#ifndef btActionInterfaceB_h
#define btActionInterfaceB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btActionInterfaceB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btActionInterfaceB();
    btActionInterfaceB();
DEFINE_INLINE_TRACE() {}
};
}
#endif