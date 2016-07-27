#ifndef btCollisionObjectWrapperB_h
#define btCollisionObjectWrapperB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btCollisionObjectWrapperB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btCollisionObjectWrapperB();
    btCollisionObjectWrapperB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif