#ifndef READABLE_H
#define READABLE_H
#include "TypeLib.h"

#include <QString>

class QRect;

class TYPESHARED_EXPORT Readable : public QString
{
public:
    Readable(void);
    Readable(const QRect qRect);
};

#endif // READABLE_H
