#ifndef ABSTRACTTASKINPUTENTITY_H
#define ABSTRACTTASKINPUTENTITY_H

#include "AbstractEntity.h"

class AbstractTaskInputEntity : public AbstractEntity
{
public:
    AbstractTaskInputEntity(void);
    AbstractTaskInputEntity(const AbstractEntity & entity);
};

#endif // ABSTRACTTASKINPUTENTITY_H
