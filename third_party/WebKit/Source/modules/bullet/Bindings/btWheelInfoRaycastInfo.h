#ifndef btWheelInfoRaycastInfo_h
#define btWheelInfoRaycastInfo_h
#include "bindings/core/v8/ScriptWrappable.h
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btWheelInfoRaycastInfo: public GarbageCollectedFinalized<btWheelInfoRaycastInfo>,public ScriptWrappable,public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    ~btWheelInfoRaycastInfo();
    btWheelInfoRaycastInfo();
    void setM_contactNormalWS(btVector3B* value);
    btVector3B* m_contactNormalWS();
    void setM_contactPointWS(btVector3B* value);
    btVector3B* m_contactPointWS();
    void setM_suspensionLength(float value);
    float m_suspensionLength();
    void setM_hardPointWS(btVector3B* value);
    btVector3B* m_hardPointWS();
    void setM_wheelDirectionWS(btVector3B* value);
    btVector3B* m_wheelDirectionWS();
    void setM_wheelAxleWS(btVector3B* value);
    btVector3B* m_wheelAxleWS();
    void setM_isInContact(bool value);
    bool m_isInContact();
    void setM_groundObject(btBlinkWrapper* value);
    btBlinkWrapper* m_groundObject();
};
}
#endif