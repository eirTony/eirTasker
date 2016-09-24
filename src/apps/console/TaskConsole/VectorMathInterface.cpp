#include "VectorMathInterface.h"

const TaskMethodKey VectorMathInterface::csmSummationKey;

VectorMathInterface::VectorMathInterface(void) {;}

VectorMathInterface::VectorMathInterface(QObject * parent,
//        const AbstractKey::List & keys,
        const AbstractTaskContextEntity & context,
        const AbstractTaskConfigurationEntity & config,
        const AbstractTaskInputEntity & input)
    : AbstractTaskRunnableInterface(new AbstractTaskObject(parent),
                                    TaskMethodKey::List()
                                        << TaskMethodKey("VectorMath/Summation"),
                                    context,
                                    config,
                                    input)
{

}



