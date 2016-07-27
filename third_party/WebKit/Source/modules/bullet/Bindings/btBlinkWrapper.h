#ifndef BT_BLINK_WRAPPER_H
#define BT_BLINK_WRAPPER_H

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"
#include "wtf/HashMap.h"
#include "wtf/text/StringHash.h"

#define FREE_IMPL_IN_DESTRUCTOR   0
//#include <Bullet3Common/b3BaseObject.h>

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


#ifdef BT_OILPAN
class btBlinkWrapper : public GarbageCollectedFinalized<btBlinkWrapper>, public ScriptWrappable {
#else
class btBlinkWrapper : public RefCounted<btBlinkWrapper>, public ScriptWrappable {
#endif

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
            //if(m_isOwner)
            //   delete m_impl;
        }
        m_impl = NULL;
     }

    //DEFINE_INLINE_TRACE() {visitor->trace(m_refedWrappersVector); visitor->trace(m_refedWrappersMap);}
    void  setImpl(void* impl, bool isOwner) {
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
#ifdef BT_OILPAN
        if(!m_refedWrappersMap.contains(name))
            m_refedWrappersMap.set(name, pObj);
#else
        pObj->ref();
#endif
    }
    void removeRef(String name) {
#ifdef BT_OILPAN
        if(m_refedWrappersMap.contains(name))
            m_refedWrappersMap.remove(name);
#else

#endif
    }

    void setRef(btBlinkWrapper* pObj) {
#ifdef BT_OILPAN
        if(!m_refedWrappersVector.contains(pObj))
            m_refedWrappersVector.append(pObj);
#else
    pObj->ref();
#endif
    }
    void removeRef(btBlinkWrapper* pObj) {
#ifdef BT_OILPAN
        if(m_refedWrappersVector.contains(pObj))
            m_refedWrappersVector.remove(m_refedWrappersVector.find(pObj));
#else
    pObj->deref();
#endif
    }

protected:
    void* m_impl;
    bool  m_isOwner;

#ifdef BT_OILPAN
    HeapHashMap<String, Member<btBlinkWrapper>> m_refedWrappersMap;
    HeapVector<Member<btBlinkWrapper>> m_refedWrappersVector;
#endif

};



}

#endif
