#ifndef btHeightfieldTerrainShapeB_h
#define btHeightfieldTerrainShapeB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btConcaveShapeB.h"
#include "core/dom/DOMTypedArray.h"

namespace blink {

class btHeightfieldTerrainShapeB: public btConcaveShapeB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btHeightfieldTerrainShapeB* create(long heightStickWidth, long heightStickLength, DOMUint8Array* heightfieldData, float heightScale, 
                                               float minHeight, float maxHeight, long upAxis, const String& hdt, bool flipQuadEdges);
    static btHeightfieldTerrainShapeB* create(long heightStickWidth, long heightStickLength, DOMFloat32Array* heightfieldData, float heightScale, 
                                               float minHeight, float maxHeight, long upAxis, const String& hdt, bool flipQuadEdges);
    virtual ~btHeightfieldTerrainShapeB();
    btHeightfieldTerrainShapeB();
    void setMargin(float margin);
    float getMargin();
    DOMArrayBufferView* m_data;
};
}
#endif