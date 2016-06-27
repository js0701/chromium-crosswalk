#ifndef btCollisionWorldLocalConvexResultB_h
#define btCollisionWorldLocalConvexResultB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btCollisionObjectB.h"
#include "btCollisionWorldLocalShapeInfoB.h"
#include "btVector3B.h"
namespace blink {
class btCollisionWorldLocalConvexResultB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btCollisionWorldLocalConvexResultB* create(btCollisionObjectB* hitCollisionObject, btCollisionWorldLocalShapeInfoB* localShapeInfo, btVector3B* hitNormalLocal, btVector3B* hitPointLocal, float hitFraction);
    ~btCollisionWorldLocalConvexResultB();
    btCollisionWorldLocalConvexResultB();
    void setM_hitCollisionObject(btCollisionObjectB* value);
    btCollisionObjectB* m_hitCollisionObject();
    void setM_localShapeInfo(btCollisionWorldLocalShapeInfoB* value);
    btCollisionWorldLocalShapeInfoB* m_localShapeInfo();
    void setM_hitNormalLocal(btVector3B* value);
    btVector3B* m_hitNormalLocal();
    void setM_hitPointLocal(btVector3B* value);
    btVector3B* m_hitPointLocal();
    void setM_hitFraction(float value);
    float m_hitFraction();
//DEFINE_INLINE_TRACE() {}
};
}
#endif