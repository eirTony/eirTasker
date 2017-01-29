#include "QQRect.h"

#include "../../core/log/Log.h"

#include "QQPoint.h"

QQRect::QQRect(void) {;}
QQRect::QQRect(const QRect qRect) : QRect(qRect) {;}
//QQRect::QQRect(const QQRect & other) : QRect(other) {;}
QQRect::QQRect(const QPoint tl, const QPoint br) :  QRect(tl, br) {;}
QQRect::QQRect(const QPoint tl, const QSize size) :  QRect(tl, size) {;}
QQRect::QQRect(const QSize size, const QPoint center) { set(size, center); }

void QQRect::set(const QRect qRect)
{
    QRect::setTopLeft(qRect.topLeft()),
    QRect::setBottomRight(qRect.bottomRight());
}

void QQRect::set(const QSize & size, const QPoint & center)
{
    QRect::setSize(size);
#if 1
    QPoint sizeOffsetPoint(size.width() / 2, size.height() / 2);
    QPoint topLeft = center - sizeOffsetPoint;
    QRect::setTopLeft(topLeft);
    TODO("Why can't: QQPoint & QQPoint::operator - (const QSize size)");
#elif 0
    QRect::setLeft(center.x - size.width() / 2);
    QRect::setTop(center.y - size.height() / 2);
#else
    QRect::setTopLeft(center - (size / 2));
#endif
}

void QQRect::set(const QPoint tl, const QPoint br)
{
    QRect::setTopLeft(tl),
    QRect::setBottomRight(br);
}

void QQRect::scaleBy(const qreal scale)
{
#if 1
    QPoint centerPoint = center();
    QSize originalSize = size();
    set(scale * originalSize, centerPoint);
    TODO("Why no #include <QTransform> ?")
#else
    QTransform xm;
    xm.scale(scale, scale);
    set(xm.mapRect(QRect::normalized()));
#endif
}

void QQRect::operator *= (const qreal scale)
{
    scaleBy(scale);
}
