#ifndef TASKOBJECT_H
#define TASKOBJECT_H

#include <QObject>

class TaskObject : public QObject
{
    Q_OBJECT
public:
    explicit TaskObject(QObject * parent=0);

signals:

public slots:
};

#endif // TASKOBJECT_H
