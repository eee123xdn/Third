#ifndef STORE_H
#define STORE_H

#include <QMainWindow>

namespace Ui {
class store;
}

class store : public QMainWindow
{
    Q_OBJECT

public:
    explicit store(QWidget *parent = nullptr);
    ~store();

private:
    Ui::store *ui;
};

#endif // STORE_H
