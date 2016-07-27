#ifndef btCollisionConfigurationB_h
#define btCollisionConfigurationB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btCollisionConfigurationB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btCollisionConfigurationB();
    btCollisionConfigurationB();
////DEFINE_INLINE_TRACE() {}
};
}
#endif