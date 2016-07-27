#ifndef btQuadWordB_h
#define btQuadWordB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btQuadWordB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btQuadWordB();
    btQuadWordB();
    float x();
    float y();
    float z();
    float w();
    void setX(float x);
    void setY(float y);
    void setZ(float z);
    void setW(float w);
////DEFINE_INLINE_TRACE() {}
};
}
#endif