#include "piggame.h"
#include "ui_piggame.h"

PigGame::PigGame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PigGame)
{
    ui->setupUi(this);
}

PigGame::~PigGame()
{
    delete ui;
}
