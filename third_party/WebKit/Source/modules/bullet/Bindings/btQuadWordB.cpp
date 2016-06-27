#include "config.h"
#include "btQuadWordB.h"
#include "../btBulletDynamicsCommon.h"
namespace blink {
btQuadWordB:: btQuadWordB() {} 

btQuadWordB:: ~btQuadWordB() { 

 }

float btQuadWordB:: x() {
    btQuadWord *impl = (btQuadWord*) m_impl;
    return impl->x();
}

float btQuadWordB:: y() {
    btQuadWord *impl = (btQuadWord*) m_impl;
    return impl->y();
}

float btQuadWordB:: z() {
    btQuadWord *impl = (btQuadWord*) m_impl;
    return impl->z();
}

float btQuadWordB:: w() {
    btQuadWord *impl = (btQuadWord*) m_impl;
    return impl->w();
}

void btQuadWordB:: setX(float x) {
    btQuadWord *impl = (btQuadWord*) m_impl;
    impl->setX(x);
}

void btQuadWordB:: setY(float y) {
    btQuadWord *impl = (btQuadWord*) m_impl;
    impl->setY(y);
}

void btQuadWordB:: setZ(float z) {
    btQuadWord *impl = (btQuadWord*) m_impl;
    impl->setZ(z);
}

void btQuadWordB:: setW(float w) {
    btQuadWord *impl = (btQuadWord*) m_impl;
    impl->setW(w);
}

}
