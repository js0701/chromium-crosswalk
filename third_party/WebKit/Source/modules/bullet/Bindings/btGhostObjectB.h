#ifndef btGhostObjectB_h
#define btGhostObjectB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionObjectB.h"
namespace blink {
class btGhostObjectB: public btCollisionObjectB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btGhostObjectB* create();
    virtual ~btGhostObjectB();
    btGhostObjectB();
    long getNumOverlappingObjects();
    btCollisionObjectB* getOverlappingObject(long index);
////DEFINE_INLINE_TRACE() {}
};
}
#endif