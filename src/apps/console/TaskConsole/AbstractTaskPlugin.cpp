#include "AbstractTaskPlugin.h"

AbstractTaskPlugin::AbstractTaskPlugin(QObject * parent)
    : AbstractTaskObject(parent)
{
    setObjectName("AbstractTaskPlugin");
}

