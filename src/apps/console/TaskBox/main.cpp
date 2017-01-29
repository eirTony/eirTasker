#include <QCoreApplication>

#include <QTimer>

#include "ConsoleObject.h"

int main(int argc, char ** argv)
{
    QCoreApplication coreApp(argc, argv);
    ConsoleObject * mainThread = new ConsoleObject(&coreApp);
    QTimer::singleShot(100, mainThread, SLOT(init()));
    return coreApp.exec();
}

