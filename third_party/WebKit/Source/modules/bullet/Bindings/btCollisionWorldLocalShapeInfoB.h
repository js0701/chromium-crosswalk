#ifndef btCollisionWorldLocalShapeInfoB_h
#define btCollisionWorldLocalShapeInfoB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btCollisionWorldLocalShapeInfoB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    ~btCollisionWorldLocalShapeInfoB();
    btCollisionWorldLocalShapeInfoB();
    void setM_shapePart(long value);
    long m_shapePart();
    void setM_triangleIndex(long value);
    long m_triangleIndex();
//DEFINE_INLINE_TRACE() {}
};
}
#endif