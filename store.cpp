#include "store.h"
#include "ui_store.h"

store::store(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::store)
{
    ui->setupUi(this);
}

store::~store()
{
    delete ui;
}
