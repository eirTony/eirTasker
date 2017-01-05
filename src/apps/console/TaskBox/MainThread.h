#ifndef MAINTHREAD_H
#define MAINTHREAD_H

#include <QObject>
#include <QThread>

class MainThread : public QThread
{
    Q_OBJECT
public:
    MainThread(QObject * parent=0);

private slots:
    void init(void);

};

#endif // MAINTHREAD_H
