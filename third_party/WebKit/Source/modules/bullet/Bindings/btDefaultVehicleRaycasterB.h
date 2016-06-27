#ifndef btDefaultVehicleRaycasterB_h
#define btDefaultVehicleRaycasterB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btVehicleRaycasterB.h"
#include "btDynamicsWorldB.h"

namespace blink {
class btDefaultVehicleRaycasterB: public btVehicleRaycasterB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btDefaultVehicleRaycasterB* create(btDynamicsWorldB* world);
    ~btDefaultVehicleRaycasterB();
    btDefaultVehicleRaycasterB();
//DEFINE_INLINE_TRACE() {}
};
}
#endif