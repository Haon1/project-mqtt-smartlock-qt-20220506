#ifndef MQTTVIEW_H
#define MQTTVIEW_H

#include <QMainWindow>

namespace Ui {
class mqttview;
}

class mqttview : public QMainWindow
{
    Q_OBJECT

public:
    explicit mqttview(QWidget *parent = nullptr);
    ~mqttview();

private:
    Ui::mqttview *ui;
};

#endif // MQTTVIEW_H
