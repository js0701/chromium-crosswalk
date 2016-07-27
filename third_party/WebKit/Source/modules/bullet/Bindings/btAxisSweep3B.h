#ifndef btAxisSweep3B_h
#define btAxisSweep3B_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btVector3B.h"
#include "btOverlappingPairCacheB.h"
namespace blink {
class btAxisSweep3B: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btAxisSweep3B* create(btVector3B* worldAabbMin, btVector3B* worldAabbMax);
    static btAxisSweep3B* create(btVector3B* worldAabbMin, btVector3B* worldAabbMax, long maxHandles);
    static btAxisSweep3B* create(btVector3B* worldAabbMin, btVector3B* worldAabbMax, long maxHandles, btOverlappingPairCacheB* pairCache);
    static btAxisSweep3B* create(btVector3B* worldAabbMin, btVector3B* worldAabbMax, long maxHandles, btOverlappingPairCacheB* pairCache, bool disableRaycastAccelerator);
    virtual ~btAxisSweep3B();
    btAxisSweep3B();
////DEFINE_INLINE_TRACE() {}
};
}
#endif