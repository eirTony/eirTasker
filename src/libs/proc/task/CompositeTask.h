#ifndef COMPOSITETASK_H
#define COMPOSITETASK_H
#include "TaskLib.h"

#include "AbstractTask.h"

class TASKSHARED_EXPORT CompositeTask : public AbstractTask
{
public:
    CompositeTask(void);
};

#endif // COMPOSITETASK_H
