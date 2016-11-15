#ifndef TASKINTERFACE_H
#define TASKINTERFACE_H
#include "TaskLib.h"

#include "../../data/Entity/Entity.h"


class TaskInterface
{
public:
    TaskInterface(void);
    ~TaskInterface();

protected:
    virtual void run(void) = 0;
    virtual TaskKey::List  supports(void) const = 0;

private:
    Entity::List mContextList;
    Entity mConfigEntity;
    Entity mInputEntity;
    Entity mResultsEntity;
};

#endif // TASKINTERFACE_H
