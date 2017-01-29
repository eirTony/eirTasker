#include "Readable.h"

#include <QPoint>
#include <QRect>

Readable::Readable(void) {;}

Readable::Readable(const QRect qRect)
    : QString(QString("").arg(qRect.width())
                          .arg(qRect.height())
                          .arg(qRect.center().x())
                          .arg(qRect.center().y())) {;}


