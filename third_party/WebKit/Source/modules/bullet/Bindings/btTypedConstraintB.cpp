#include "config.h"
#include "btTypedConstraintB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btTypedConstraintB:: btTypedConstraintB() {} 

btTypedConstraintB:: ~btTypedConstraintB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btTypedConstraint*) m_impl;
    }
    m_impl = NULL;

}

void btTypedConstraintB:: enableFeedback(bool needsFeedback) {
    btTypedConstraint *impl = (btTypedConstraint*) m_impl;
    impl->enableFeedback(needsFeedback);
}

float btTypedConstraintB:: getBreakingImpulseThreshold() {
    btTypedConstraint *impl = (btTypedConstraint*) m_impl;
    return impl->getBreakingImpulseThreshold();
}

void btTypedConstraintB:: setBreakingImpulseThreshold(float threshold) {
    btTypedConstraint *impl = (btTypedConstraint*) m_impl;
    impl->setBreakingImpulseThreshold(threshold);
}

}
