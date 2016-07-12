#ifndef btTriangleIndexVertexArrayB_h
#define btTriangleIndexVertexArrayB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btIndexedMeshB.h"
#include "btStridingMeshInterfaceB.h"

namespace blink {
class btTriangleIndexVertexArrayB: public btStridingMeshInterfaceB{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btTriangleIndexVertexArrayB* create();
    virtual ~btTriangleIndexVertexArrayB();
    btTriangleIndexVertexArrayB();
    void addIndexedMesh(btIndexedMeshB* mesh, const String& indexType);

};
}
#endif
