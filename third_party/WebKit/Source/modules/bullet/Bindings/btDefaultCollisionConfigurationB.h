#ifndef btDefaultCollisionConfigurationB_h
#define btDefaultCollisionConfigurationB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionConfigurationB.h"
#include "btDefaultCollisionConstructionInfoB.h"

namespace blink {
class btDefaultCollisionConfigurationB: public btCollisionConfigurationB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btDefaultCollisionConfigurationB* create();
    static btDefaultCollisionConfigurationB* create(btDefaultCollisionConstructionInfoB* constructionInfo);
    virtual ~btDefaultCollisionConfigurationB();
    btDefaultCollisionConfigurationB();
////DEFINE_INLINE_TRACE() {}
};
}
#endif