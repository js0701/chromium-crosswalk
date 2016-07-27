#ifndef btStridingMeshInterfaceB_h
#define btStridingMeshInterfaceB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btStridingMeshInterfaceB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btStridingMeshInterfaceB();
    btStridingMeshInterfaceB();
////DEFINE_INLINE_TRACE() {}
};
}
#endif