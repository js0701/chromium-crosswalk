#ifndef btDefaultMotionStateB_h
#define btDefaultMotionStateB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btMotionStateB.h"
#include "btTransformB.h"
namespace blink {
class btDefaultMotionStateB: public btMotionStateB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btDefaultMotionStateB* create();
    static btDefaultMotionStateB* create(btTransformB* startTrans);
    static btDefaultMotionStateB* create(btTransformB* startTrans, btTransformB* centerOfMassOffset);
    virtual ~btDefaultMotionStateB();
    btDefaultMotionStateB();
    void setM_graphicsWorldTrans(btTransformB* value);
    btTransformB* m_graphicsWorldTrans();
////DEFINE_INLINE_TRACE() {}
};
}
#endif