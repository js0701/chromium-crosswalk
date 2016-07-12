#include "config.h"
#include "Bullet.h"
#include <android/log.h>
#define  LOG_TAG    "Bullet"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

#define FUNC_NAME(a, b) a ## b
#define ATTRIBUTE_GETTER_CUSTOM(_class_) \
    void V8Bullet:: FUNC_NAME(_class_, AttributeGetterCustom) (v8::FunctionCallbackInfo<v8::Value> const& info) { \
        v8::Isolate* isolate = info.GetIsolate(); \
        v8::Handle<v8::FunctionTemplate> functionTemplate = V8bt##_class_##B::domTemplate(isolate); \
        v8::Handle<v8::Function> v8Function = functionTemplate->GetFunction(); \
        v8SetReturnValue(info, v8Function); \
    }

//#include "Bullet.hpp"
#include "bindings/modules/v8/V8Bullet.h"
#include "bindings/modules/v8/V8btActionInterfaceB.h"
#include "bindings/modules/v8/V8btAxisSweep3B.h"
#include "bindings/modules/v8/V8btBoxShapeB.h"
#include "bindings/modules/v8/V8btBroadphaseInterfaceB.h"
#include "bindings/modules/v8/V8btBvhTriangleMeshShapeB.h"
#include "bindings/modules/v8/V8btCapsuleShapeB.h"
#include "bindings/modules/v8/V8btCapsuleShapeXB.h"
#include "bindings/modules/v8/V8btCapsuleShapeZB.h"
#include "bindings/modules/v8/V8btCollisionConfigurationB.h"
#include "bindings/modules/v8/V8btCollisionDispatcherB.h"
#include "bindings/modules/v8/V8btCollisionObjectB.h"
#include "bindings/modules/v8/V8btCollisionShapeB.h"
#include "bindings/modules/v8/V8btCollisionWorldB.h"
#include "bindings/modules/v8/V8btCollisionWorldClosestConvexResultCallbackB.h"
#include "bindings/modules/v8/V8btCollisionWorldClosestRayResultCallbackB.h"
#include "bindings/modules/v8/V8btCollisionWorldContactResultCallbackB.h"
#include "bindings/modules/v8/V8btCollisionWorldConvexResultCallbackB.h"
#include "bindings/modules/v8/V8btCollisionWorldLocalConvexResultB.h"
#include "bindings/modules/v8/V8btCollisionWorldLocalShapeInfoB.h"
#include "bindings/modules/v8/V8btCollisionWorldRayResultCallbackB.h"
#include "bindings/modules/v8/V8btCompoundShapeB.h"
#include "bindings/modules/v8/V8btConcaveShapeB.h"
#include "bindings/modules/v8/V8btConeShapeB.h"
#include "bindings/modules/v8/V8btConeShapeXB.h"
#include "bindings/modules/v8/V8btConeShapeZB.h"
#include "bindings/modules/v8/V8btConeTwistConstraintB.h"
#include "bindings/modules/v8/V8btConstraintSettingB.h"
#include "bindings/modules/v8/V8btConstraintSolverB.h"
#include "bindings/modules/v8/V8btContactSolverInfoB.h"
#include "bindings/modules/v8/V8btConvexHullShapeB.h"
#include "bindings/modules/v8/V8btConvexShapeB.h"
#include "bindings/modules/v8/V8btConvexTriangleMeshShapeB.h"
#include "bindings/modules/v8/V8btCylinderShapeB.h"
#include "bindings/modules/v8/V8btCylinderShapeXB.h"
#include "bindings/modules/v8/V8btCylinderShapeZB.h"
#include "bindings/modules/v8/V8btDbvtBroadphaseB.h"
#include "bindings/modules/v8/V8btDefaultCollisionConfigurationB.h"
#include "bindings/modules/v8/V8btDefaultCollisionConstructionInfoB.h"
#include "bindings/modules/v8/V8btDefaultMotionStateB.h"
#include "bindings/modules/v8/V8btDefaultVehicleRaycasterB.h"
#include "bindings/modules/v8/V8btDiscreteDynamicsWorldB.h"
#include "bindings/modules/v8/V8btDispatcherB.h"
#include "bindings/modules/v8/V8btDispatcherInfoB.h"
#include "bindings/modules/v8/V8btDynamicsWorldB.h"
#include "bindings/modules/v8/V8btGeneric6DofConstraintB.h"
#include "bindings/modules/v8/V8btGeneric6DofSpringConstraintB.h"
#include "bindings/modules/v8/V8btGhostObjectB.h"
#include "bindings/modules/v8/V8btGhostPairCallbackB.h"
#include "bindings/modules/v8/V8btHeightfieldTerrainShapeB.h"
#include "bindings/modules/v8/V8btHingeConstraintB.h"
#include "bindings/modules/v8/V8btKinematicCharacterControllerB.h"
#include "bindings/modules/v8/V8btManifoldPointB.h"
#include "bindings/modules/v8/V8btMatrix3x3B.h"
#include "bindings/modules/v8/V8btMotionStateB.h"
#include "bindings/modules/v8/V8btOverlappingPairCacheB.h"
#include "bindings/modules/v8/V8btOverlappingPairCallbackB.h"
#include "bindings/modules/v8/V8btPairCachingGhostObjectB.h"
#include "bindings/modules/v8/V8btPersistentManifoldB.h"
#include "bindings/modules/v8/V8btPoint2PointConstraintB.h"
#include "bindings/modules/v8/V8btQuadWordB.h"
#include "bindings/modules/v8/V8btQuaternionB.h"
#include "bindings/modules/v8/V8btRaycastVehicleB.h"
#include "bindings/modules/v8/V8btRigidBodyB.h"
#include "bindings/modules/v8/V8btRigidBodyConstructionInfoB.h"
#include "bindings/modules/v8/V8btSequentialImpulseConstraintSolverB.h"
#include "bindings/modules/v8/V8btSliderConstraintB.h"
#include "bindings/modules/v8/V8btSphereShapeB.h"
#include "bindings/modules/v8/V8btStaticPlaneShapeB.h"
#include "bindings/modules/v8/V8btStridingMeshInterfaceB.h"
#include "bindings/modules/v8/V8btTransformB.h"
#include "bindings/modules/v8/V8btTriangleMeshB.h"
#include "bindings/modules/v8/V8btTriangleMeshShapeB.h"
#include "bindings/modules/v8/V8btTypedConstraintB.h"
#include "bindings/modules/v8/V8btVector3B.h"
#include "bindings/modules/v8/V8btVector4B.h"
#include "bindings/modules/v8/V8btVehicleRaycasterB.h"
#include "bindings/modules/v8/V8btVehicleTuningB.h"
#include "bindings/modules/v8/V8btWheelInfoB.h"
#include "bindings/modules/v8/V8btWheelInfoRaycastInfoB.h"
#include "bindings/modules/v8/V8btIndexedMeshB.h"
#include "bindings/modules/v8/V8btTriangleIndexVertexArrayB.h"
#include "Bindings/btBlinkWrapper.h"
#include "wtf/HashMap.h"
//#include "bindings/modules/v8/V8ConcreteContactResultCallbackB.h"

namespace blink {


   HashMap<void*, btBlinkWrapper*> btBlinkWrapperRepo::m_repoMap;

   void Bullet::runTest()
   {
      btVector3B::runTest();
   }

   ATTRIBUTE_GETTER_CUSTOM(ActionInterface)
   ATTRIBUTE_GETTER_CUSTOM(AxisSweep3)
   ATTRIBUTE_GETTER_CUSTOM(BoxShape)
   ATTRIBUTE_GETTER_CUSTOM(BroadphaseInterface)
   ATTRIBUTE_GETTER_CUSTOM(BvhTriangleMeshShape)
   ATTRIBUTE_GETTER_CUSTOM(CapsuleShape)
   ATTRIBUTE_GETTER_CUSTOM(CapsuleShapeX)
   ATTRIBUTE_GETTER_CUSTOM(CapsuleShapeZ)
   ATTRIBUTE_GETTER_CUSTOM(CollisionConfiguration)
   ATTRIBUTE_GETTER_CUSTOM(CollisionDispatcher)
   ATTRIBUTE_GETTER_CUSTOM(CollisionObject)
   ATTRIBUTE_GETTER_CUSTOM(CollisionShape)
   ATTRIBUTE_GETTER_CUSTOM(CollisionWorld)
   ATTRIBUTE_GETTER_CUSTOM(CollisionWorldClosestConvexResultCallback)
   ATTRIBUTE_GETTER_CUSTOM(CollisionWorldClosestRayResultCallback)
   ATTRIBUTE_GETTER_CUSTOM(CollisionWorldContactResultCallback)
   ATTRIBUTE_GETTER_CUSTOM(CollisionWorldConvexResultCallback)
   ATTRIBUTE_GETTER_CUSTOM(CollisionWorldLocalConvexResult)
   ATTRIBUTE_GETTER_CUSTOM(CollisionWorldLocalShapeInfo)
   ATTRIBUTE_GETTER_CUSTOM(CollisionWorldRayResultCallback)
   ATTRIBUTE_GETTER_CUSTOM(CompoundShape)
   ATTRIBUTE_GETTER_CUSTOM(ConcaveShape)
   ATTRIBUTE_GETTER_CUSTOM(ConeShape)
   ATTRIBUTE_GETTER_CUSTOM(ConeShapeX)
   ATTRIBUTE_GETTER_CUSTOM(ConeShapeZ)
   ATTRIBUTE_GETTER_CUSTOM(ConeTwistConstraint)
   ATTRIBUTE_GETTER_CUSTOM(ConstraintSetting)
   ATTRIBUTE_GETTER_CUSTOM(ConstraintSolver)
   ATTRIBUTE_GETTER_CUSTOM(ContactSolverInfo)
   ATTRIBUTE_GETTER_CUSTOM(ConvexHullShape)
   ATTRIBUTE_GETTER_CUSTOM(ConvexShape)
   ATTRIBUTE_GETTER_CUSTOM(ConvexTriangleMeshShape)
   ATTRIBUTE_GETTER_CUSTOM(CylinderShape)
   ATTRIBUTE_GETTER_CUSTOM(CylinderShapeX)
   ATTRIBUTE_GETTER_CUSTOM(CylinderShapeZ)
   ATTRIBUTE_GETTER_CUSTOM(DbvtBroadphase)
   ATTRIBUTE_GETTER_CUSTOM(DefaultCollisionConfiguration)
   ATTRIBUTE_GETTER_CUSTOM(DefaultCollisionConstructionInfo)
   ATTRIBUTE_GETTER_CUSTOM(DefaultMotionState)
   ATTRIBUTE_GETTER_CUSTOM(DefaultVehicleRaycaster)
   ATTRIBUTE_GETTER_CUSTOM(DiscreteDynamicsWorld)
   ATTRIBUTE_GETTER_CUSTOM(Dispatcher)
   ATTRIBUTE_GETTER_CUSTOM(DispatcherInfo)
   ATTRIBUTE_GETTER_CUSTOM(DynamicsWorld)
   ATTRIBUTE_GETTER_CUSTOM(Generic6DofConstraint)
   ATTRIBUTE_GETTER_CUSTOM(Generic6DofSpringConstraint)
   ATTRIBUTE_GETTER_CUSTOM(GhostObject)
   ATTRIBUTE_GETTER_CUSTOM(GhostPairCallback)
   ATTRIBUTE_GETTER_CUSTOM(HeightfieldTerrainShape)
   ATTRIBUTE_GETTER_CUSTOM(HingeConstraint)
   ATTRIBUTE_GETTER_CUSTOM(KinematicCharacterController)
   ATTRIBUTE_GETTER_CUSTOM(ManifoldPoint)
   ATTRIBUTE_GETTER_CUSTOM(Matrix3x3)
   ATTRIBUTE_GETTER_CUSTOM(MotionState)
   ATTRIBUTE_GETTER_CUSTOM(OverlappingPairCache)
   ATTRIBUTE_GETTER_CUSTOM(OverlappingPairCallback)
   ATTRIBUTE_GETTER_CUSTOM(PairCachingGhostObject)
   ATTRIBUTE_GETTER_CUSTOM(PersistentManifold)
   ATTRIBUTE_GETTER_CUSTOM(Point2PointConstraint)
   ATTRIBUTE_GETTER_CUSTOM(QuadWord)
   ATTRIBUTE_GETTER_CUSTOM(Quaternion)
   ATTRIBUTE_GETTER_CUSTOM(RaycastVehicle)
   ATTRIBUTE_GETTER_CUSTOM(RigidBody)
   ATTRIBUTE_GETTER_CUSTOM(RigidBodyConstructionInfo)
   ATTRIBUTE_GETTER_CUSTOM(SequentialImpulseConstraintSolver)
   ATTRIBUTE_GETTER_CUSTOM(SliderConstraint)
   ATTRIBUTE_GETTER_CUSTOM(SphereShape)
   ATTRIBUTE_GETTER_CUSTOM(StaticPlaneShape)
   ATTRIBUTE_GETTER_CUSTOM(StridingMeshInterface)
   ATTRIBUTE_GETTER_CUSTOM(Transform)
   ATTRIBUTE_GETTER_CUSTOM(TriangleMesh)
   ATTRIBUTE_GETTER_CUSTOM(TriangleMeshShape)
   ATTRIBUTE_GETTER_CUSTOM(TypedConstraint)
   ATTRIBUTE_GETTER_CUSTOM(Vector3)
   ATTRIBUTE_GETTER_CUSTOM(Vector4)
   ATTRIBUTE_GETTER_CUSTOM(VehicleRaycaster)
   ATTRIBUTE_GETTER_CUSTOM(VehicleTuning)
   ATTRIBUTE_GETTER_CUSTOM(WheelInfo)
   ATTRIBUTE_GETTER_CUSTOM(WheelInfoRaycastInfo)
   ATTRIBUTE_GETTER_CUSTOM(IndexedMesh)
   ATTRIBUTE_GETTER_CUSTOM(TriangleIndexVertexArray)

   /*
   void V8Bullet::ConcreteContactResultCallbackAttributeGetterCustom(v8::FunctionCallbackInfo<v8::Value> const& info)
   {
        v8::Isolate* isolate = info.GetIsolate();
        v8::Handle<v8::FunctionTemplate> functionTemplate = V8ConcreteContactResultCallbackB::domTemplate(isolate);
        v8::Handle<v8::Function> v8Function = functionTemplate->GetFunction();
        v8SetReturnValue(info, v8Function);
   }
   */

}

