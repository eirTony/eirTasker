#ifndef QQRECT_H
#define QQRECT_H
#include "TypeLib.h"

#include <QRect>
#include <QTransform>

class TYPESHARED_EXPORT QQRect : public QRect
{
public:
    QQRect(void);
    QQRect(const QQRect & other);
    QQRect(const QPoint tl, const QPoint br);

    void set(const QRect other);
    void set(const QPoint tl, const QPoint br);

    void scaleBy(const qreal scale);

    void operator *= (const qreal scale);
};

#endif // QQRECT_H
