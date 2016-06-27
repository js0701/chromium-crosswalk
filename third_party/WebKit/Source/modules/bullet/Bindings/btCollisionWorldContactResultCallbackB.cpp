#include "config.h"
#include "btCollisionWorldContactResultCallbackB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionWorldContactResultCallbackB:: btCollisionWorldContactResultCallbackB() {}

btCollisionWorldContactResultCallbackB:: ~btCollisionWorldContactResultCallbackB() {

}

float btCollisionWorldContactResultCallbackB:: addSingleResult(btManifoldPointB* cp, btCollisionObjectWrapperB* colObj0Wrap, long partId0, long index0, btCollisionObjectWrapperB* colObj1Wrap, long partId1, long index1) {
    btCollisionWorld::ContactResultCallback *impl = (btCollisionWorld::ContactResultCallback*) m_impl;
    setRef(cp);
    setRef(colObj0Wrap);
    setRef(colObj1Wrap);
    return impl->addSingleResult(*(btManifoldPoint*)(cp->getImpl()),(btCollisionObjectWrapper*)(colObj0Wrap->getImpl()),partId0,index0,(btCollisionObjectWrapper*)(colObj1Wrap->getImpl()),partId1,index1);
    
}

}
