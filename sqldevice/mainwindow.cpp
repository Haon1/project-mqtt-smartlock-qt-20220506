#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QListWidget>
#include <QDebug>

int first_index;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mqtt_win = new mqttview(this);
    sql_win = new sqlserver(this);

    ui->stackedWidget->addWidget(mqtt_win);
    ui->stackedWidget->addWidget(sql_win);
    ui->stackedWidget->setCurrentWidget(mqtt_win);

    first_index = ui->stackedWidget->currentIndex();
    qDebug() << "first index " << first_index;
    //listwidget 添加项目
    QListWidgetItem *item = new QListWidgetItem("mqtt");
    //itemlist.append(item);                      //加入链表，后期释放
    item->setTextAlignment(Qt::AlignHCenter);   //设置文字水平居中
    ui->listWidget->addItem(item);             //把居中后的item加到ListWidget中
    QListWidgetItem *item2 = new QListWidgetItem("sql");
    //itemlist.append(item);                      //加入链表，后期释放
    item2->setTextAlignment(Qt::AlignHCenter);   //设置文字水平居中
    ui->listWidget->addItem(item2);             //把居中后的item加到ListWidget中
    connect(ui->listWidget,SIGNAL(currentRowChanged(int)),this,SLOT(slotRowChanged(int)));


}

MainWindow::~MainWindow()
{
    delete ui;
    delete mqtt_win;
    delete sql_win;
}

#if 1
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

void MainWindow::slotRowChanged(int currentRow)
{
    qDebug() << currentRow;
    ui->stackedWidget->setCurrentIndex(currentRow+2);
}


