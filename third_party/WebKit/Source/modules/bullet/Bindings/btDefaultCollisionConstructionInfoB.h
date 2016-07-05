#ifndef btDefaultCollisionConstructionInfoB_h
#define btDefaultCollisionConstructionInfoB_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btDefaultCollisionConstructionInfoB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btDefaultCollisionConstructionInfoB* create();
    virtual ~btDefaultCollisionConstructionInfoB();
    btDefaultCollisionConstructionInfoB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif