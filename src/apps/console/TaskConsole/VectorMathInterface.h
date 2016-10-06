#ifndef VECTORMATHINTERFACE_H
#define VECTORMATHINTERFACE_H

#include "AbstractTaskRunnableInterface.h"

class VectorMathInterface : public AbstractTaskRunnableInterface
{
public:
    VectorMathInterface(QObject * parent=0);
    VectorMathInterface(const AbstractTaskInputEntity & input,
                        const AbstractTaskConfigurationEntity & config=AbstractTaskConfigurationEntity(),
                        const AbstractTaskContextEntity & context=AbstractTaskContextEntity(),
                        QObject * parent=0);

public:
    const static TaskMethodKey csmSummationKey;
};

#endif // VECTORMATHINTERFACE_H
