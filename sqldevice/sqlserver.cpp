#include "sqlserver.h"
#include "ui_sqlserver.h"

sqlserver::sqlserver(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sqlserver)
{
    ui->setupUi(this);
}

sqlserver::~sqlserver()
{
    delete ui;
}
