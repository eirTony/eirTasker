#include "AbstractTaskObject.h"

#include "AbstractTaskRunnableInterface.h"

AbstractTaskObject::AbstractTaskObject(QObject * parent)
    : QObject(parent)
{
    setObjectName("AbstractTaskObject");
}

void AbstractTaskObject::deleteInterface(AbstractTaskRunnableInterface * rif)
{
    delete rif;
    QObject::deleteLater();
}
