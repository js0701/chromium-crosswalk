#ifndef B3_BASEOBJECT_H
#define B3_BASEOBJECT_H

#include <stdlib.h>

class b3BaseObject {

public:
   b3BaseObject() {
       m_refCount = 1;
       m_blinkWrapper = NULL;
   }
  virtual  ~b3BaseObject()
   {

   }

   void ref()
   {
       m_refCount++;
   }

   void deref()
   {
      m_refCount--;
      if(m_refCount <=1)
          delete this;
   }

   void* getWrapper()
   {
      return m_blinkWrapper;
   }

   void setWrapper(void* wrapper)
   {
      m_blinkWrapper = wrapper;
   }


protected:
   unsigned int m_refCount;
   void* m_blinkWrapper;
};

#endif
