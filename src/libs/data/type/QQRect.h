#ifndef QQRECT_H
#define QQRECT_H
#include "TypeLib.h"

#include <QRect>
//#include <QTransform>

class QQPoint;

class TYPESHARED_EXPORT QQRect : public QRect
{
public:
    QQRect(void);
    QQRect(const QRect qRect);
//  QQRect(const QQRect & other);
    QQRect(const QPoint tl, const QPoint br);
    QQRect(const QPoint tl, const QSize size);
    QQRect(const QSize size, const QPoint center);

    void set(const QRect qRect);
    void set(const QSize &size, const QPoint &center);
    void set(const QPoint tl, const QPoint br);

    void scaleBy(const qreal scale);

    void operator *= (const qreal scale);
};

#endif // QQRECT_H
