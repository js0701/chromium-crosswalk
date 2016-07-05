#ifndef btQuaternionB_h
#define btQuaternionB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btQuadWordB.h"
#include "btVector3B.h"

namespace blink {
class btQuaternionB: public btQuadWordB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btQuaternionB* create(float x, float y, float z, float w);
    static btQuaternionB* create(float yaw, float pitch, float roll);
    static btQuaternionB* create(btVector3B* axis, float angle);
    virtual ~btQuaternionB();
    btQuaternionB();
    void setValue(float x, float y, float z, float w);
    void setEulerZYX(float z, float y, float x);
    void normalize();
//DEFINE_INLINE_TRACE() {}
};
}
#endif