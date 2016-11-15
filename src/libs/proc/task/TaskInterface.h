#ifndef TASKINTERFACE_H
#define TASKINTERFACE_H
#include "TaskLib.h"

#include "../../data/Entity/Entity.h"
#include "../../data/Type/Flags.h"


class TaskInterface
{
public:
    enum FlagIndex
    {
        nullFlags = 0,

        Electron,
        Atomic,
        Composite,

        sizeFlags
    };

public:
    TaskInterface(void);
    ~TaskInterface();

protected:
    virtual void run(void) = 0;
    virtual TaskKeyList  supports(void) const = 0;

private:
    Entity::List    mContextList;
    Entity          mConfigEntity;
    Entity          mInputEntity;
    Entity          mResultsEntity;
    Flags           mFlags;

};

#endif // TASKINTERFACE_H
