#ifndef btPersistentManifoldB_h
#define btPersistentManifoldB_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
#include "btCollisionObjectB.h"
#include "btManifoldPointB.h"

namespace blink {

class btPersistentManifoldB: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btPersistentManifoldB* create();
    ~btPersistentManifoldB();
    btPersistentManifoldB();
    btCollisionObjectB* getBody0();
    btCollisionObjectB* getBody1();
    long getNumContacts();
    btManifoldPointB* getContactPoint(long index);
//DEFINE_INLINE_TRACE() {}
};
}
#endif