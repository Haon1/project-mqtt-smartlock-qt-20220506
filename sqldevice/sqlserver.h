#ifndef SQLSERVER_H
#define SQLSERVER_H

#include <QMainWindow>

namespace Ui {
class sqlserver;
}

class sqlserver : public QMainWindow
{
    Q_OBJECT

public:
    explicit sqlserver(QWidget *parent = nullptr);
    ~sqlserver();

private:
    Ui::sqlserver *ui;
};

#endif // SQLSERVER_H
