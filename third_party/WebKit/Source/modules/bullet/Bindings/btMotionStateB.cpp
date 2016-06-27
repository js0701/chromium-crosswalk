#include "config.h"
#include "btMotionStateB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btMotionStateB:: btMotionStateB() {} 

btMotionStateB:: ~btMotionStateB() { 

 }

void btMotionStateB:: getWorldTransform(btTransformB* worldTrans) {
    btMotionState *impl = (btMotionState*) m_impl;
    impl->getWorldTransform(*(btTransform*)(worldTrans->getImpl()));
}

void btMotionStateB:: setWorldTransform(btTransformB* worldTrans) {
    btMotionState *impl = (btMotionState*) m_impl;
    impl->setWorldTransform(*(btTransform*)(worldTrans->getImpl()));
    setRef("worldTrans", worldTrans);
}

}
