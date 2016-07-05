#ifndef BT_BLINK_WRAPPER_H
#define BT_BLINK_WRAPPER_H

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"
#include "wtf/HashMap.h"
#include "wtf/text/StringHash.h"

#define FREE_IMPL_IN_DESTRUCTOR   0
#include <Bullet3Common/b3BaseObject.h>

namespace blink {


class btBlinkWrapper;

class btBlinkWrapperRepo
{
   public:
       static void setWrapperImplPair(void* implPtr, btBlinkWrapper* pWrapper)
        {
            m_repoMap.set(implPtr, pWrapper);
        }

       static void* getWrapperForImpl(void* implPtr)
        {
            if(m_repoMap.contains(implPtr))
                return  m_repoMap.get(implPtr);
            else
                return NULL;
        }

       static void removeWrapperForImpl(void* implPtr)
        {
            m_repoMap.remove(implPtr);
        }
   private:

       static HashMap<void*, btBlinkWrapper*> m_repoMap;
};


class btBlinkWrapper : public GarbageCollectedFinalized<btBlinkWrapper>, public ScriptWrappable {

    DEFINE_WRAPPERTYPEINFO();

public:
    btBlinkWrapper() {
        m_impl = NULL;
        m_isOwner = false;
     }
    virtual ~btBlinkWrapper() {
        if(m_impl)
        {
            //m_impl->setWrapper(NULL);
            btBlinkWrapperRepo::removeWrapperForImpl(m_impl);
            if(m_isOwner)
               delete m_impl;
        }
        m_impl = NULL;
     }

    DEFINE_INLINE_TRACE() {visitor->trace(m_refedWrappersVector); visitor->trace(m_refedWrappersMap);}
    void  setImpl(b3BaseObject* impl, bool isOwner) {
        m_impl = impl;
        m_isOwner = isOwner;
        //if(m_impl != NULL)
        //{
        //    m_impl->setWrapper((void*)this);
        //}
        btBlinkWrapperRepo::setWrapperImplPair(m_impl, this);
     }

    void setOwner(bool isOwner)
     {
         m_isOwner = isOwner;  
     }
        
    void* getImpl()           { return m_impl; }

    void setRef(String name, btBlinkWrapper* pObj) {
        if(!m_refedWrappersMap.contains(name))
            m_refedWrappersMap.set(name, pObj);
    }
    void removeRef(String name) {
        if(m_refedWrappersMap.contains(name))
            m_refedWrappersMap.remove(name);
    }

    void setRef(btBlinkWrapper* pObj) {
        if(!m_refedWrappersVector.contains(pObj))
            m_refedWrappersVector.append(pObj);
    }
    void removeRef(btBlinkWrapper* pObj) {
        if(m_refedWrappersVector.contains(pObj))
            m_refedWrappersVector.remove(m_refedWrappersVector.find(pObj));
    }

protected:
    b3BaseObject* m_impl;
    bool  m_isOwner;

    HeapHashMap<String, Member<btBlinkWrapper>> m_refedWrappersMap;
    HeapVector<Member<btBlinkWrapper>> m_refedWrappersVector;

};



}

#endif
