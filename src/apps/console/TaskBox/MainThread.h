#ifndef MAINTHREAD_H
#define MAINTHREAD_H

#include <QObject>

class MainThread : public QObject
{
    Q_OBJECT
public:
    MainThread(QObject * parent=0);

private slots:
    void init(void);

};

#endif // MAINTHREAD_H
