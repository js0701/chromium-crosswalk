#include "config.h"
#include "btDispatcherB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btDispatcherB:: btDispatcherB() {} 

btDispatcherB:: ~btDispatcherB() {
    if(m_impl)
    {
     //m_impl->setWrapper(NULL);
     btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
     if(m_isOwner)
        delete (btDispatcher*) m_impl;
    }
    m_impl = NULL;
    
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
