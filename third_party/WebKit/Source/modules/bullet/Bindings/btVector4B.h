#ifndef btVector4B_h
#define btVector4B_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btVector3B.h"
namespace blink {
class btVector4B: public btVector3B{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btVector4B* create();
    static btVector4B* create(float x, float y, float z, float w);
    virtual ~btVector4B();
    btVector4B();
    float w();
    void setValue(float x, float y, float z, float w);
//DEFINE_INLINE_TRACE() {}
};
}
#endif