#include <QCoreApplication>

#include "MainThread.h"

int main(int argc, char ** argv)
{
    QCoreApplication a(argc, argv);
    MainThread();
    return a.exec();
}

