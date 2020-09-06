#ifndef STARTGAME_H
#define STARTGAME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class StartGame; }
QT_END_NAMESPACE

class StartGame : public QMainWindow
{
    Q_OBJECT

public:
    StartGame(QWidget *parent = nullptr);
    ~StartGame();

private:
    Ui::StartGame *ui;
};
#endif // STARTGAME_H
