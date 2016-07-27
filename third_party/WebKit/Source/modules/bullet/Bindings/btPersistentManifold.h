#ifndef btPersistentManifold_h
#define btPersistentManifold_h
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "btBlinkWrapper.h"
namespace blink {
class btPersistentManifold: public btBlinkWrapper{
    DEFINE_WRAPPERTYPEINFO();
    public:
    static btPersistentManifold* create();
    ~btPersistentManifold();
    btPersistentManifold();
    btCollisionObject* getBody0();
    btCollisionObject* getBody1();
    long getNumContacts();
    btManifoldPoint* getContactPoint(long index);
//DEFINE_INLINE_TRACE() {}
};
}
#endif