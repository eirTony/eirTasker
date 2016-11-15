#ifndef ABSTRACTTASK_H
#define ABSTRACTTASK_H
#include "TaskLib.h"

#include "TaskInterface.h"

#include "../../data/Entity/EntityKey.h"

class TASKSHARED_EXPORT AbstractTask
        : public TaskInterface
{
public:
    AbstractTask(void);

private:
    EntityKey mInputKey;
};

#endif // ABSTRACTTASK_H
