#ifndef ABSTRACTTASKCONFIGURATIONENTITY_H
#define ABSTRACTTASKCONFIGURATIONENTITY_H

#include "AbstractEntity.h"

class AbstractTaskConfigurationEntity : public AbstractEntity
{
public:
    AbstractTaskConfigurationEntity(void);
    AbstractTaskConfigurationEntity(const AbstractEntity & entity);
};

#endif // ABSTRACTTASKCONFIGURATIONENTITY_H
