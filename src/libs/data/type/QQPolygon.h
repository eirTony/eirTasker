#ifndef QQPOLYGON_H
#define QQPOLYGON_H
#include "TypeLib.h"

#include <QPolygon>

class TYPESHARED_EXPORT QQPolygon : public QPolygon
{
public:
    QQPolygon(void);
    bool isClosed(void) const;
    bool hasTail(void) const;
    void close(void);
    QPolygon closed(void) const;
};

#endif // QQPOLYGON_H
