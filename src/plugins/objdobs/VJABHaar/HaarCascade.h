#ifndef HAARCASCADE_H
#define HAARCASCADE_H

class QFileInfo;
class QDomElement;

#include <../../../libs/core/base/ErrorHandler.h>

class HaarCascade : public ErrorHandler
{
public:
    HaarCascade(void);
    HaarCascade(const QFileInfo & xmlFi);
    HaarCascade(const QDomElement & de);
    bool set(const QFileInfo & xmlFi);
    bool set(const QDomElement & de);
};

#endif // HAARCASCADE_H
