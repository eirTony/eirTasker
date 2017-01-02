#include "QQRect.h"

QQRect::QQRect(void) {;}
QQRect::QQRect(const QQRect & other) : QRect(other) {;}
//{ set(other.topLeft(), other.bottomRight()); }
QQRect::QQRect(const QPoint tl, const QPoint br) { set(tl, br); }

void QQRect::set(const QRect other)
{
    QRect::setTopLeft(other.topLeft()),
    QRect::setBottomRight(other.bottomRight());
}

void QQRect::set(const QPoint tl, const QPoint br)
{
    QRect::setTopLeft(tl),
    QRect::setBottomRight(br);
}

void QQRect::scaleBy(const qreal scale)
{
    QTransform xm;
    xm.scale(scale, scale);
    set(xm.mapRect(QRect::normalized()));
}

void QQRect::operator *= (const qreal scale)
{
    scaleBy(scale);
}
