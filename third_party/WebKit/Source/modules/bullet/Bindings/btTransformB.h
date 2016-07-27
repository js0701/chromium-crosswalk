#ifndef btTransformB_h
#define btTransformB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btQuaternionB.h"
#include "btVector3B.h"
#include "btMatrix3x3B.h"
namespace blink {
class btTransformB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btTransformB* create();
    static btTransformB* create(btQuaternionB* q, btVector3B* v);
    virtual ~btTransformB();
    btTransformB();
    void setIdentity();
    void setOrigin(btVector3B* origin);
    void setRotation(btQuaternionB* rotation);
    btVector3B* getOrigin();
    btQuaternionB* getRotation();
    btMatrix3x3B* getBasis();
////DEFINE_INLINE_TRACE() {}
};
}
#endif