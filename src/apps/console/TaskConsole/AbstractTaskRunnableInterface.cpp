#include "AbstractTaskRunnableInterface.h"

AbstractTaskRunnableInterface::AbstractTaskRunnableInterface(QObject * parent)
    : cmpObject(new AbstractTaskObject(parent)) {;}

AbstractTaskRunnableInterface::
    AbstractTaskRunnableInterface(AbstractTaskObject * taskObject,
                              const MethodKeyList & keys,
                              const AbstractTaskContextEntity & context,
                              const AbstractTaskConfigurationEntity & config,
                              const AbstractTaskInputEntity & input)
    : cmpObject(taskObject)
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
bool AbstractTaskRunnableInterface::supports(const AbstractKey method)
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
    cmpObject->deleteInterface();
    return entity;
}


