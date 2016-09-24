#ifndef TASKCONSOLE_H
#define TASKCONSOLE_H

#include <QThread>

//#include <QIODevice>

//#include "StdIODevice.h"
#include "StdIO.h"

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
//    StdIODevice * mpStdIO = 0;
    static StdIO * smpStdIO;
};

#endif // TASKCONSOLE_H
