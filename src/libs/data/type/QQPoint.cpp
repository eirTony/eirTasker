#include "QQPoint.h"

#if 0
#include <QSize>

QQPoint::QQPoint(void) {;}
QQPoint::QQPoint(const QPoint qPoint) : QPoint(qPoint) {;}

QQPoint & QQPoint::operator - (const QSize size)
{
    QPoint::rx() -= size.width()  / 2,
    QPoint::ry() -= size.height() / 2;
    return *this;
}

#endif
