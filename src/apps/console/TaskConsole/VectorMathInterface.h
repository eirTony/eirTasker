#ifndef VECTORMATHINTERFACE_H
#define VECTORMATHINTERFACE_H

#include "AbstractTaskRunnableInterface.h"

class VectorMathInterface : public AbstractTaskRunnableInterface
{
public:
    VectorMathInterface(void);
    VectorMathInterface(QObject * parent,
                        const AbstractTaskContextEntity & context,
                        const AbstractTaskConfigurationEntity & config,
                        const AbstractTaskInputEntity & input);

public:
    const static TaskMethodKey csmSummationKey;
};

#endif // VECTORMATHINTERFACE_H
