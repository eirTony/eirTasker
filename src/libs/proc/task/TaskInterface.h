#ifndef TASKINTERFACE_H
#define TASKINTERFACE_H
#include "TaskLib.h"

#include "../../core/base/BasicErrorInfo.h"
#include "../../data/Entity/Entity.h"
#include "../../data/Type/Flags.h"

class TaskObject;

class TASKSHARED_EXPORT TaskInterface : public BasicErrorInfo
{
public:
    enum FlagIndex
    {
        nullFlagIndex = 0,

        Valid,

        Electron,
        Atomic,
        Composite,

        Vector,

        sizeFlagsIndex
    };

public:
    TaskInterface(void);
    TaskInterface(const TaskKey taskKey,
                  TaskObject * taskObject
#if 0
                                         ,
                  const Entity & input,
                  const Entity & config=Entity(),
                  const EntityList & contextList=EntityList()
#endif
                );
    ~TaskInterface();

protected:
    virtual void run(void) = 0;
    virtual TaskKeyList  supports(void) const = 0;
    void setValid(void);

private:
    TaskKey         mTaskKey;
    TaskObject *    mpTaskObject;
#if 0
    EntityList    mContextList;
    Entity          mConfigEntity;
    Entity          mInputEntity;
    Entity          mResultsEntity;
#endif
    Flags           mFlags;

};

#endif // TASKINTERFACE_H
