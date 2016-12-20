#ifndef LOGOBJECT_H
#define LOGOBJECT_H

#include <QObject>

class LogObject : public QObject
{
    Q_OBJECT
public:
    explicit LogObject(QObject * parent=0);

signals:

public slots:
};

#endif // LOGOBJECT_H
