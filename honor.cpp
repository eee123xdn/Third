#include "honor.h"
#include "ui_honor.h"

honor::honor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::honor)
{
    ui->setupUi(this);
}

honor::~honor()
{
    delete ui;
}
