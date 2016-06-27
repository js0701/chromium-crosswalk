#ifndef btMatrix3x3B_h
#define btMatrix3x3B_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btQuaternionB.h"
#include "btVector3B.h"
namespace blink {
class btMatrix3x3B: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    ~btMatrix3x3B();
    btMatrix3x3B();
    void setEulerZYX(float ex, float ey, float ez);
    void getRotation(btQuaternionB* q);
    btVector3B* getRow(long y);
//DEFINE_INLINE_TRACE() {}
};
}
#endif