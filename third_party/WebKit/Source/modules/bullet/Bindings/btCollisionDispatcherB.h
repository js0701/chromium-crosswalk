#ifndef btCollisionDispatcherB_h
#define btCollisionDispatcherB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btDispatcherB.h"
#include "btDefaultCollisionConfigurationB.h"
namespace blink {
class btCollisionDispatcherB: public btDispatcherB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btCollisionDispatcherB* create(btDefaultCollisionConfigurationB* conf);
    virtual ~btCollisionDispatcherB();
    btCollisionDispatcherB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif