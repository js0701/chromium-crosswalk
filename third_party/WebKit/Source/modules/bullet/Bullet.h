#ifndef Bullet_h
#define Bullet_h
/*
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/text/WTFString.h"
*/
#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/heap/Handle.h"
#include "wtf/Forward.h"
#include "wtf/RefCounted.h"
#include "wtf/RefPtr.h"
#include "wtf/Uint8Array.h"
#include "wtf/text/WTFString.h"

#include "Bullet_class.hpp"
namespace blink {
    class Bullet : public GarbageCollectedFinalized<Bullet>, public ScriptWrappable {
        DEFINE_WRAPPERTYPEINFO();
        public:
            static Bullet* create()
            {
                return new Bullet();
            }
            ~Bullet()  {    }
            
            void runTest();
            
            DEFINE_INLINE_TRACE() {}

        private:
            Bullet()  {    }
};
}

#endif

