#include <QCoreApplication>

#include "TaskConsole.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    TaskConsole console(qApp);
    return a.exec();
}

