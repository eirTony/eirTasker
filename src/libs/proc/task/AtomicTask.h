#ifndef ATOMICTASK_H
#define ATOMICTASK_H
#include "TaskLib.h"

#include "AbstractTask.h"

class TASKSHARED_EXPORT AtomicTask : public AbstractTask
{
public:
    AtomicTask(void);
};

#endif // ATOMICTASK_H
