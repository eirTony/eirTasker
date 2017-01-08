#ifndef LOGOBJECT_H
#define LOGOBJECT_H
#include "LogLib.h"

#include <QObject>

class LOGSHARED_EXPORT LogObject : public QObject
{
    Q_OBJECT
public:
    explicit LogObject(QObject * parent=0);

signals:

public slots:
};

#endif // LOGOBJECT_H
