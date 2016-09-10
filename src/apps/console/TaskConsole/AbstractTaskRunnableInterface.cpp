#include "AbstractTaskRunnableInterface.h"

AbstractTaskRunnableInterface::AbstractTaskRunnableInterface(void) {;}

AbstractTaskRunnableInterface::
    AbstractTaskRunnableInterface(AbstractTaskObject * taskObject,
                              const AbstractTaskContextEntity & context,
                              const AbstractTaskConfigurationEntity & config,
                              const AbstractTaskInputEntity & input)
    : cmpObject(taskObject)
    , mContext(context)
    , mConfig(config)
    , mInput(input)
{
    QRunnable::setAutoDelete(false);
}

AbstractTaskResultsEntity
    AbstractTaskRunnableInterface::results(void) const
{
    return mReslults;
}

AbstractTaskResultsEntity
    AbstractTaskRunnableInterface::operator() (void) const
{
    return results();
}

AbstractTaskResultsEntity AbstractTaskRunnableInterface::takeResults(void)
{
    AbstractTaskResultsEntity entity = results();
    cmpObject->deleteInterface(this);
    return entity;
}


