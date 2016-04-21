#include "config.h"
#include "DelayedActionBufferBaseImpl.h"

#include "wtf/Assertions.h"
#include "wtf/PartitionAlloc.h"
#include "wtf/Partitions.h"
#include "wtf/Threading.h"

namespace WTF{

    DelayedActionBufferBaseImpl:: ~DelayedActionBufferBaseImpl()
    {
        if(m_actsCount > 0)
        {
          // something wrong is here further action need to rely on the buffer
          // so the buffer should not be freed

        }
       //now we need to free the backed buffer
    }

    void DelayedActionBufferBaseImpl:: copyAndReturnNewAddress(const void* buf, int lengthInByte, void** newbuf)
    {
        //if(m_ifBackupNeeded) //m_actsCount > 0
        {
            MutexLocker locker(m_bufferLock);
            *newbuf = partitionAllocGeneric(WTF::Partitions::bufferPartition(), lengthInByte);
            ASSERT(*newbuf);
            memcpy(*newbuf, buf, lengthInByte);
            m_backupBuffers.append((void*)buf);
            m_backupRefedCount.append(m_actsCount);
            m_actsCount = 0;
        }
    }

    void DelayedActionBufferBaseImpl:: freeBackupBuffer(void* buf)
    {

        MutexLocker locker(m_bufferLock);

        //Partitions::bufferFree(buf);

        for (unsigned int i = 0; i < m_backupBuffers.size(); i++) {
           if(m_backupBuffers[i] == buf )
           {
              if(m_backupRefedCount[i] ==1)
              {
                   m_backupBuffers.remove(i, 1);
                   m_backupRefedCount.remove(i, 1);
                   Partitions::bufferFree(buf);
              }
              else
              {
                   m_backupRefedCount[i] = m_backupRefedCount[i] - 1;
              }
              break;
           }
        }
    }
}
