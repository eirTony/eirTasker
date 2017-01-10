#include <QCoreApplication>

#include <QTimer>

#include "MainThread.h"

int main(int argc, char ** argv)
{
    QCoreApplication coreApp(argc, argv);
    MainThread * mainThread = new MainThread(&coreApp);
    QTimer::singleShot(100, mainThread, SLOT(init()));
    return coreApp.exec();
}

