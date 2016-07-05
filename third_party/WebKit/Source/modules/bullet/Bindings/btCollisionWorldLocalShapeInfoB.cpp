#include "config.h"
#include "btCollisionWorldLocalShapeInfoB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btCollisionWorldLocalShapeInfoB:: btCollisionWorldLocalShapeInfoB() {}

btCollisionWorldLocalShapeInfoB:: ~btCollisionWorldLocalShapeInfoB() {
    if(m_impl)
    {
        //m_impl->setWrapper(NULL);
        btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
        if(m_isOwner)
           delete (btCollisionWorld::LocalShapeInfo*) m_impl;
    }
    m_impl = NULL;
 }

void btCollisionWorldLocalShapeInfoB::  setM_shapePart(long value ) {
    btCollisionWorld::LocalShapeInfo *impl = (btCollisionWorld::LocalShapeInfo*) m_impl;
    impl->m_shapePart = value;
}

long btCollisionWorldLocalShapeInfoB:: m_shapePart(){
    btCollisionWorld::LocalShapeInfo *impl = (btCollisionWorld::LocalShapeInfo*) m_impl;
    return impl->m_shapePart;
}

void btCollisionWorldLocalShapeInfoB::  setM_triangleIndex(long value ) {
    btCollisionWorld::LocalShapeInfo *impl = (btCollisionWorld::LocalShapeInfo*) m_impl;
    impl->m_triangleIndex = value;
}

long btCollisionWorldLocalShapeInfoB:: m_triangleIndex(){
    btCollisionWorld::LocalShapeInfo *impl = (btCollisionWorld::LocalShapeInfo*) m_impl;
    return impl->m_triangleIndex;
}

}
