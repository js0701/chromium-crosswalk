#ifndef btPairCachingGhostObjectB_h
#define btPairCachingGhostObjectB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btGhostObjectB.h"
namespace blink {
class btPairCachingGhostObjectB: public btGhostObjectB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btPairCachingGhostObjectB* create();
    virtual ~btPairCachingGhostObjectB();
    btPairCachingGhostObjectB();
////DEFINE_INLINE_TRACE() {}
};
}
#endif