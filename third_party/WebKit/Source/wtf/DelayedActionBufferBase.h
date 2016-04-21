#ifndef DELAYED_ACTION_BUFFER_BASE_h
#define DELAYED_ACTION_BUFFER_BASE_h


#define DELAYEDACTION_FREE       0xF0000000   //free afer usage
#define DELAYEDACTION_DEREF      0xE0000000   //deref after usage
#define DELAYEDACTION_RMASK      0x0FFFFFFF
#define DELAYEDACTION_MASK       0xF0000000


class DelayedActionBufferBase {

public:

    virtual bool isBackupNeeded() =0;
    virtual void setBackup(bool ifBackup) =0;
    virtual void referenceForLaterAction() =0;
    virtual void deReferenceAsActionComplete(void* buf) =0;
    static  void  freeBuffer(void* buf); 

};

typedef struct {
    const void* buf;
    DelayedActionBufferBase* delayedActionBufferBase;
} DelayedActionBuffer;

#endif
