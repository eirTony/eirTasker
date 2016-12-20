#ifndef TASKTOPMAIN_H
#define TASKTOPMAIN_H

#include <QMainWindow>

namespace Ui {
class TaskTopMain;
}

class TaskTopMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit TaskTopMain(QWidget *parent = 0);
    ~TaskTopMain();

private:
    Ui::TaskTopMain *ui;
};

#endif // TASKTOPMAIN_H
