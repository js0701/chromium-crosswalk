#ifndef btConstraintSettingB_h
#define btConstraintSettingB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btConstraintSettingB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btConstraintSettingB* create();
    virtual ~btConstraintSettingB();
    btConstraintSettingB();
    void setM_tau(float value);
    float m_tau();
    void setM_damping(float value);
    float m_damping();
    void setM_impulseClamp(float value);
    float m_impulseClamp();
//DEFINE_INLINE_TRACE() {}
};
}
#endif