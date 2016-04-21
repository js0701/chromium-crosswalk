#include "config.h"
#include "DelayedActionBufferBase.h"
#include "wtf/Partitions.h"

void DelayedActionBufferBase::freeBuffer(void* buf) {
    WTF::Partitions::bufferFree(buf);
}
