#ifndef btVehicleRaycaster_h
#define btVehicleRaycaster_h
#include "bindings/core/v8/ScriptWrappable.h
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btVehicleRaycaster: public GarbageCollectedFinalized<btVehicleRaycaster>,public ScriptWrappable,public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    ~btVehicleRaycaster();
    btVehicleRaycaster();
};
}
#endif