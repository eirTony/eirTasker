#include "AbstractTaskRunnableInterface.h"

AbstractTaskRunnableInterface::AbstractTaskRunnableInterface(void) {;}

AbstractTaskRunnableInterface::
    AbstractTaskRunnableInterface(AbstractTaskObject * taskObject,
                              const AbstractTaskContextEntity & context,
                              const AbstractTaskConfigurationEntity & config,
                              const AbstractTaskInputEntity & input)
    : cmpObject(taskObject) , mContext(context) , mConfig(config) , mInput(input) {;}

AbstractTaskResultsEntity &
    AbstractTaskRunnableInterface::result (void) const
{
    return & mReslults;
}




