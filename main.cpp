#include "startgame.h"
#include "piggame.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PigGame w;
    w.show();
    return a.exec();
}
