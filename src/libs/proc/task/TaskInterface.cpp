#include "TaskInterface.h"

#include "../../core/base/ErrorHandler.h"

TaskInterface::TaskInterface(void)
{

}

TaskInterface::TaskInterface(const TaskKey taskKey,
                             TaskObject * taskObject,
                             const Entity input,
                             const Entity config,
                             const Entity::List contextList)
    : mTaskKey(taskKey)
    , mpTaskObject(taskObject)
    , mpError(new ErrorHandler)
    , mContextList(contextList)
    , mConfigEntity(config)
    , mInputEntity(input)
{
    setValid();
}

void TaskInterface::setValid(void)
{
    mFlags.set(FlagIndex::Valid);
}
