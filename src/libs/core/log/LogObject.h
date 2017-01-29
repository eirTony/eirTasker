#ifndef LOGOBJECT_H
#define LOGOBJECT_H
#include "LogLib.h"

#include <QObject>

#include "../../../libs/core/base/BasicSeverity.h"

class LOGSHARED_EXPORT LogObject : public QObject
{
    Q_OBJECT
public:
    explicit LogObject(QObject * parent=0);

signals:
    void queueProcessed(void);

public slots:
    void processQueue(void);

private:
    BasicSeverity mMaxSeverity;
};

#endif // LOGOBJECT_H
