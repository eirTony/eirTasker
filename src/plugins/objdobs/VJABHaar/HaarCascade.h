#ifndef HAARCASCADE_H
#define HAARCASCADE_H
#include "VJABHaar.h"

class QFileInfo;
class QDomElement;

#include <../../../libs/core/base/BasicErrorInfo.h>

class HaarCascade : public BasicErrorInfo
{
public:
    HaarCascade(void);
    HaarCascade(const QFileInfo & xmlFi);
    HaarCascade(const QDomElement & de);
    bool set(const QFileInfo & xmlFi);
    bool set(const QDomElement & de);
};

#endif // HAARCASCADE_H
