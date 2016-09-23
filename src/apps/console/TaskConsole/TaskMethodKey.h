#ifndef TASKMETHODKEY_H
#define TASKMETHODKEY_H

#include "AbstractKey.h"
#include "AbstractId.h"

class TaskMethodKey : public AbstractKey
{
public:
    TaskMethodKey(void);
    TaskMethodKey(const quint64 key);
    TaskMethodKey(const AbstractId &id);
};

#endif // TASKMETHODKEY_H
