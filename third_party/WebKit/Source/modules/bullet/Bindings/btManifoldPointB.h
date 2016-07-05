#ifndef btManifoldPointB_h
#define btManifoldPointB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btVector3B.h"
namespace blink {
class btManifoldPointB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    virtual ~btManifoldPointB();
    btManifoldPointB();
    btVector3B* getPositionWorldOnA();
    btVector3B* getPositionWorldOnB();
    double getAppliedImpulse();
    double getDistance();
    void setM_localPointA(btVector3B* value);
    btVector3B* m_localPointA();
    void setM_localPointB(btVector3B* value);
    btVector3B* m_localPointB();
    void setM_positionWorldOnB(btVector3B* value);
    btVector3B* m_positionWorldOnB();
    void setM_positionWorldOnA(btVector3B* value);
    btVector3B* m_positionWorldOnA();
    void setM_normalWorldOnB(btVector3B* value);
    btVector3B* m_normalWorldOnB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif