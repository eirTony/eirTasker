#ifndef OBJDINTERFACE_H
#define OBJDINTERFACE_H

#include <../../proc/task/TaskInterface.h>

class ObjdInterface : public TaskInterface
{
public:
    ObjdInterface(void);
#if 0
    ObjdInterface(const TaskKey taskKey,
                  TaskObject * taskObject,
                  const Entity input,
                  const Entity config=Entity(),
                  const Entity::List contextList=Entity::List());
#endif
    ~ObjdInterface();

protected:
    virtual void run(void) = 0;
    virtual TaskKeyList  supports(void) const = 0;
    void setValid(void);
};

#endif // OBJDINTERFACE_H
