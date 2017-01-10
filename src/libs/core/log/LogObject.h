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
    void queueProcessed(void);

public slots:
    void processQueue(void);
};

#endif // LOGOBJECT_H
