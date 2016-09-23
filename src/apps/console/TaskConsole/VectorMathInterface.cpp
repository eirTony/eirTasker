#include "VectorMathInterface.h"

const TaskMethodKey cmSummationKey("VectorMath/Summation");

VectorMathInterface::VectorMathInterface(void) {;}

VectorMathInterface::VectorMathInterface(QObject * parent,
        const AbstractTaskContextEntity & context,
        const AbstractTaskConfigurationEntity & config,
        const AbstractTaskInputEntity & input)
    : AbstractTaskRunnableInterface(new AbstractTaskObject(parent),
                                    TaskMethodKey::List()
                                        << cmSummationKey,
                                    context,
                                    config,
                                    input)
{

}



