#ifndef TASKCONSOLE_H
#define TASKCONSOLE_H

#include <QThread>

class TaskConsole : public QThread
{
    Q_OBJECT
public:
    explicit TaskConsole(QObject * parent=0);

signals:

public slots:

private slots:
    void init(void);

private:
};

#endif // TASKCONSOLE_H
