#include "VectorMathInterface.h"

const TaskMethodKey VectorMathInterface::csmSummationKey;

VectorMathInterface::VectorMathInterface(void) {;}

VectorMathInterface::VectorMathInterface(const AbstractTaskInputEntity & input,
                                         const AbstractTaskConfigurationEntity & config=AbstractTaskConfigurationEntity(),
                                         const AbstractTaskContextEntity & context=AbstractTaskContextEntity(),
                                         QObject * parent=0)
    : AbstractTaskRunnableInterface(new AbstractTaskObject(parent),
                                    TaskMethodKey::List()
                                        << TaskMethodKey("VectorMath/Summation"),
                                    context,
                                    config,
                                    input) {;}



