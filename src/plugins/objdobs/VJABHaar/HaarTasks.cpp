#include "HaarTasks.h"

#include <QDomElement>

#include "HaarStage.h"
#include "HaarTree.h"

HaarTasks::HaarTasks(void) {;}

HaarStage HaarTasks::readStage(const int x,
                               const QDomElement & de)
{
    HaarStage stage(x, de);
    return stage;
}
