#ifndef TASKLIB_H
#define TASKLIB_H
#include "task_global.h"

#include <QList>

#include "../../data/Kii/BitKey.h"

typedef BitKey TaskKey;
typedef QList<TaskKey> TaskKeyList;

class TASKSHARED_EXPORT TaskLib
{

public:
    TaskLib(void);
};

#endif // TASKLIB_H
