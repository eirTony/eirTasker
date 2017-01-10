#include "TaskInterface.h"


TaskInterface::TaskInterface(void)
{

}

TaskInterface::TaskInterface(const TaskKey taskKey,
                             TaskObject * taskObject
#if 0
                             ,
                             const Entity & input,
                             const Entity & config,
                             const EntityList & contextList
#endif
                             )
    : mTaskKey(taskKey)
    , mpTaskObject(taskObject)
#if 0
    , mContextList(contextList)
    , mConfigEntity(config)
    , mInputEntity(input)
#endif
{
    setValid();
}

TaskInterface::~TaskInterface() {;}

void TaskInterface::setValid(void)
{
    //mFlags.set(FlagIndex::Valid);
}

