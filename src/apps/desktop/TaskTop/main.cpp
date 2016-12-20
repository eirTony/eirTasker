#include "TaskTopMain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TaskTopMain w;
    w.show();

    return a.exec();
}
