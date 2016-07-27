#ifndef btCompoundShapeB_h
#define btCompoundShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btCollisionShapeB.h"
#include "btTransformB.h"
#include "btCollisionShapeB.h"
namespace blink {
class btCompoundShapeB: public btCollisionShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btCompoundShapeB* create();
    static btCompoundShapeB* create(bool enableDynamicAabbTree);
    virtual ~btCompoundShapeB();
    btCompoundShapeB();
    void addChildShape(btTransformB* localTransform, btCollisionShapeB* shape);
    void removeChildShapeByIndex(long childShapeindex);
    long getNumChildShapes();
    btCollisionShapeB* getChildShape(long index);
    void setMargin(float margin);
    float getMargin();
////DEFINE_INLINE_TRACE() {}
};
}
#endif