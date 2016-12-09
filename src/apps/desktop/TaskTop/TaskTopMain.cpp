#include "TaskTopMain.h"
#include "ui_TaskTopMain.h"

TaskTopMain::TaskTopMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TaskTopMain)
{
    ui->setupUi(this);
}

TaskTopMain::~TaskTopMain()
{
    delete ui;
}
