#ifndef HAARTASKS_H
#define HAARTASKS_H
#include "VJABHaar.h"

class QDomElement;

class HaarStage;

class VJABHAARSHARED_EXPORT HaarTasks
{
public:
    HaarTasks(void);

    HaarStage readStage(const int x, const QDomElement & de);
};

#endif // HAARTASKS_H
