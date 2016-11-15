#ifndef TASKINTERFACE_H
#define TASKINTERFACE_H
#include "TaskLib.h"

#include "../../data/Entity/Entity.h"
#include "../../data/Type/Flags.h"

class ErrorHandler;
class TaskObject;

class TaskInterface
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
                  TaskObject * taskObject,
                  const Entity input,
                  const Entity config=Entity(),
                  const Entity::List contextList=Entity::List());
    ~TaskInterface();

protected:
    virtual void run(void) = 0;
    virtual TaskKeyList  supports(void) const = 0;
    void setValid(void);

private:
    TaskKey         mTaskKey;
    TaskObject *    mpTaskObject;
    ErrorHandler *  mpError;
    Entity::List    mContextList;
    Entity          mConfigEntity;
    Entity          mInputEntity;
    Entity          mResultsEntity;
    Flags           mFlags;

};

#endif // TASKINTERFACE_H
