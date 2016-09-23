#include "AbstractTaskObject.h"

#include "AbstractTaskRunnableInterface.h"

AbstractTaskObject::AbstractTaskObject(QObject * parent)
    : QObject(parent)
{
    setObjectName("AbstractTaskObject");
}

void AbstractTaskObject::setRif(AbstractTaskRunnableInterface * pRif)
{
    mpRif = pRif;
}

void AbstractTaskObject::deleteInterface(void)
{
    delete mpRif;
    QObject::deleteLater();
}
