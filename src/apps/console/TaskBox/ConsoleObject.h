#ifndef MAINTHREAD_H
#define MAINTHREAD_H

#include <QObject>

class VJABHaar;

class MainThread : public QObject
{
    Q_OBJECT
public:
    MainThread(QObject * parent=0);

private slots:
    void init(void);

private:
    VJABHaar * mpHaar = 0;

};

#endif // MAINTHREAD_H
