#include "config.h"
#include "btHeightfieldTerrainShapeB.h"
#include "../btBulletDynamicsCommon.h"
#include "../BulletCollision/CollisionShapes/btHeightfieldTerrainShape.h"
#include "../BulletCollision/CollisionShapes/btConcaveShape.h"

namespace blink {

PHY_ScalarType StringToScalarType(const String& string)
{
    const char* str = string.utf8().data();

    if(strcmp(str, "PHY_FLOAT") == 0)
        return PHY_FLOAT;
    
    if(strcmp(str, "PHY_DOUBLE") == 0)
        return PHY_DOUBLE;

    if(strcmp(str, "PHY_INTEGER") == 0)
        return PHY_DOUBLE;
    
    if(strcmp(str, "PHY_SHORT") == 0)
        return PHY_INTEGER;

    if(strcmp(str, "PHY_FIXEDPOINT88") == 0)
        return PHY_FIXEDPOINT88;

    if(strcmp(str, "PHY_UCHAR") == 0)
        return PHY_UCHAR;

    return PHY_FLOAT;

}
btHeightfieldTerrainShapeB:: btHeightfieldTerrainShapeB() {} 

btHeightfieldTerrainShapeB:: ~btHeightfieldTerrainShapeB() {
}

btHeightfieldTerrainShapeB* btHeightfieldTerrainShapeB::  create(long heightStickWidth, long heightStickLength, DOMUint8Array* heightfieldData, float heightScale, 
                                                                  float minHeight, float maxHeight, long upAxis, const String& hdt, bool flipQuadEdges) { 
    btHeightfieldTerrainShapeB *wrapper = new btHeightfieldTerrainShapeB();
    btHeightfieldTerrainShape *impl = new btHeightfieldTerrainShape(heightStickWidth, heightStickLength, heightfieldData->baseAddress(), heightScale, 
                                                                    minHeight, maxHeight, upAxis, StringToScalarType(hdt), flipQuadEdges);
    wrapper->setImpl(impl, true);
    wrapper->m_data = heightfieldData;
    return wrapper;
}

void btHeightfieldTerrainShapeB:: setMargin(float margin) {
    btHeightfieldTerrainShape *impl = (btHeightfieldTerrainShape*) m_impl;
    impl->setMargin(margin);
}

float btHeightfieldTerrainShapeB:: getMargin() {
    btHeightfieldTerrainShape *impl = (btHeightfieldTerrainShape*) m_impl;
    return impl->getMargin();
}

}
