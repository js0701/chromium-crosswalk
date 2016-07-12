#ifndef btIndexedMeshB_h
#define btIndexedMeshB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "core/dom/DOMTypedArray.h"


namespace blink {
class btIndexedMeshB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btIndexedMeshB* create();
    virtual ~btIndexedMeshB();
    btIndexedMeshB();

    int m_numTrangles();
    void set_m_numTriangles(int numTriangles);

    int m_numVertices();
    void set_m_numVertices(int numVertices);

    DOMUint8Array* m_triangleIndexBase();
    void set_m_triangleIndexBase(DOMInt32Array* array);
    void set_m_triangleIndexBase(DOMInt16Array* array);
    void set_m_triangleIndexBase(DOMUint8Array* array);
    void set_m_triangleIndexBase(DOMFloat32Array* array);
    void set_m_triangleIndexBase(DOMFloat64Array* array);

    DOMUint8Array*  m_vertexBase();
    void set_m_vertexBase(DOMInt32Array* array);
    void set_m_vertexBase(DOMInt16Array* array);
    void set_m_vertexBase(DOMUint8Array* array);
    void set_m_vertexBase(DOMFloat32Array* array);
    void set_m_vertexBase(DOMFloat64Array* array);

    int m_triangleIndexStride();
    void set_m_triangleIndexStride(int stride);


    int m_vertexStride();
    void set_m_vertexStride(int stride);
};
}

#endif
