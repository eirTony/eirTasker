#ifndef QQPOINT_H
#define QQPOINT_H
#include "TypeLib.h"

#if 0

#include <QPoint>

class TYPESHARED_EXPORT QQPoint : public QPoint
{
public:
    QQPoint(void);
    QQPoint(const QPoint qPoint);

    QQPoint & operator - (QSize size);
};

#endif
#endif // QQPOINT_H
