#ifndef btVector3B_h
#define btVector3B_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btVector3B: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btVector3B* create();
    static btVector3B* create(float x, float y, float z);
    static bool runTest();
    
    virtual ~btVector3B();
    btVector3B();
    float length();
    void setValue(float x, float y, float z);
    void normalize();
    float dot(btVector3B* v);
    btVector3B* op_mul(float x);
    btVector3B* op_add(btVector3B* v);
    btVector3B* op_sub(btVector3B* v);
    void setX(float value);
    float x();
    void setY(float value);
    float y();
    void setZ(float value);
    float z();
////DEFINE_INLINE_TRACE() {}
};
}
#endif