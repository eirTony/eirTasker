#ifndef ABSTRACTTASKPLUGIN_H
#define ABSTRACTTASKPLUGIN_H

#include "AbstractTaskObject.h"
#include "AbstractTaskRunnableInterface.h"

class AbstractTaskPlugin
        : public AbstractTaskObject
        , public AbstractTaskRunnableInterface
{
    Q_OBJECT
public:
    AbstractTaskPlugin(QObject  * parent=0);
};

#endif // ABSTRACTTASKPLUGIN_H
