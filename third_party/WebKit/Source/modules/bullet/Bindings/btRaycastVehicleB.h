#ifndef btRaycastVehicleB_h
#define btRaycastVehicleB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btActionInterfaceB.h"
#include "btVehicleTuningB.h"
#include "btRigidBodyB.h"
#include "btVehicleRaycasterB.h"
#include "btTransformB.h"
#include "btWheelInfoB.h"
#include "btVector3B.h"
namespace blink {
class btRaycastVehicleB: public btActionInterfaceB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btRaycastVehicleB* create(btVehicleTuningB* tuning, btRigidBodyB* chassis, btVehicleRaycasterB* raycaster);
    //static btRaycastVehicleB* create(float force, long wheel);
    virtual ~btRaycastVehicleB();
    btRaycastVehicleB();
    void applyEngineForce(float force, long wheel);
    void setSteeringValue(float steering, long wheel);
    btTransformB* getWheelTransformWS(long wheelIndex);
    void updateWheelTransform(long wheelIndex, bool interpolatedTransform);
    btWheelInfoB* addWheel(btVector3B* connectionPointCS0, btVector3B* wheelDirectionCS0, btVector3B* wheelAxleCS, float suspensionRestLength, float wheelRadius, btVehicleTuningB* tuning, bool isFrontWheel);
    long getNumWheels();
    btRigidBodyB* getRigidBody();
    btWheelInfoB* getWheelInfo(long index);
    void setBrake(float brake, long wheelIndex);
    void setCoordinateSystem(long rightIndex, long upIndex, long forwardIndex);
    float getCurrentSpeedKmHour();
////DEFINE_INLINE_TRACE() {}
};
}
#endif