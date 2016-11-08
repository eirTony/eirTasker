#include "AbstractTaskRunnableInterface.h"

AbstractTaskRunnableInterface::AbstractTaskRunnableInterface(QObject * parent)
    : cmpTaskObject(new AbstractTaskObject(parent)) {;}

AbstractTaskRunnableInterface::
    AbstractTaskRunnableInterface(AbstractTaskObject * taskObject,
                              const MethodKeyList & keys,
                              const AbstractTaskContextEntity & context,
                              const AbstractTaskConfigurationEntity & config,
                              const AbstractTaskInputEntity & input)
    : cmpTaskObject(taskObject)
    , mMethodList(keys)
    , mContext(context)
    , mConfig(config)
    , mInput(input)
{
    QRunnable::setAutoDelete(false);
}

void AbstractTaskRunnableInterface::setMethods(const MethodKeyList & methodList)
{
    mMethodList = methodList;
}

// virtual
AbstractTaskRunnableInterface::MethodKeyList AbstractTaskRunnableInterface::supportedMethods(void) const
{
    return mMethodList;
}

// virtual
bool AbstractTaskRunnableInterface::supports(const MethodKey method)
{
    return mMethodList.contains(method);
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
    cmpTaskObject->deleteInterface();
    return entity;
}


