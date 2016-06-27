#ifndef btVehicleRaycasterB_h
#define btVehicleRaycasterB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btVehicleRaycasterB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    ~btVehicleRaycasterB();
    btVehicleRaycasterB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif