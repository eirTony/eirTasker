#include "VectorMathInterface.h"

#if 0

const TaskMethodKey VectorMathInterface::csmSummationKey;

VectorMathInterface::VectorMathInterface(QObject * parent)
    : AbstractTaskRunnableInterface(new AbstractTaskObject(parent))  {;}

VectorMathInterface::VectorMathInterface(const AbstractTaskInputEntity & input,
                                         const AbstractTaskConfigurationEntity & config,
                                         const AbstractTaskContextEntity & context,
                                         QObject * parent)
    : AbstractTaskRunnableInterface(new AbstractTaskObject(parent),
                                    TaskMethodKey::List()
                                        << TaskMethodKey("VectorMath/Summation"),
                                    context,
                                    config,
                                    input) {;}



#endif
