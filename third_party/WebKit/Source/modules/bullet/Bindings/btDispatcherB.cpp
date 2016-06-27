#include "config.h"
#include "btDispatcherB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDispatcherB:: btDispatcherB() {} 

btDispatcherB:: ~btDispatcherB() {
    
}

long btDispatcherB:: getNumManifolds() {
    btDispatcher *impl = (btDispatcher*) m_impl;
    return impl->getNumManifolds();
}

btPersistentManifoldB* btDispatcherB:: getManifoldByIndexInternal(long index) {
    btDispatcher *impl = (btDispatcher*) m_impl;
    btPersistentManifold* ret = impl->getManifoldByIndexInternal(index);
    btPersistentManifoldB *wrapper = (btPersistentManifoldB*) ret->getWrapper();
    if(wrapper == NULL)
    {
        wrapper = new btPersistentManifoldB();
        wrapper->setImpl(ret, false);
    }
    return wrapper;
}

}
