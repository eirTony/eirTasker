#ifndef TASKCONSOLE_H
#define TASKCONSOLE_H

#include <QObject>

class TaskConsole : public QObject
{
    Q_OBJECT
public:
    explicit TaskConsole(QObject * parent=0);

signals:

public slots:
};

#endif // TASKCONSOLE_H
