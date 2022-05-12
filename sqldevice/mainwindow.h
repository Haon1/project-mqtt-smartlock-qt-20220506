#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mqttview.h"
#include "sqlserver.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void mousePressEvent(QMouseEvent *event);
public slots:
    void slotRowChanged(int currentRow);

private:
    Ui::MainWindow *ui;
    mqttview *mqtt_win;
    sqlserver *sql_win;
};
#endif // MAINWINDOW_H
