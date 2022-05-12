#include "mqttview.h"
#include "ui_mqttview.h"

mqttview::mqttview(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mqttview)
{
    ui->setupUi(this);
}

mqttview::~mqttview()
{
    delete ui;
}
