#ifndef PIGGAME_H
#define PIGGAME_H

#include <QMainWindow>

namespace Ui {
class PigGame;
}

class PigGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit PigGame(QWidget *parent = nullptr);
    ~PigGame();

private:
    Ui::PigGame *ui;
};

#endif // PIGGAME_H
