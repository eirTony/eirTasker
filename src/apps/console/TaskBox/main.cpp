#include <QCoreApplication>

#include "MainThread.h"

int main(int argc, char ** argv)
{
    QCoreApplication a(argc, argv);
    MainThread mainThread(qApp);
    return a.exec();
}

