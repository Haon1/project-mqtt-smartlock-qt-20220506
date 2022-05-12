#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

#if 0
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    static int i=1;
    qDebug() << i << " ";
    QFile qssfile;

    if(i%2)
        qssfile.setFileName(":/resource/style/grey.qss");
    else
        qssfile.setFileName(":/resource/style/other.qss");

    int ret = qssfile.open(QIODevice::ReadOnly);
    if(!ret)
    {
        qDebug()<< "open failed";
        return ;
    }

    QString  style = qssfile.readAll();
    this->setStyleSheet(style);
    qssfile.close();

    i++;
}
#endif

