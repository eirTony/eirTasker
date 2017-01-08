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

protected:


private:
#if 0
    EntityKey::List mContextKeys;
    EntityKey mConfigKey;
    EntityKey mInputKey;
    EntityKey mResultKey;
    TaskKeyList mParentTaskKeys;
#endif
    float mCoefficent;
};

#endif // ABSTRACTTASK_H
