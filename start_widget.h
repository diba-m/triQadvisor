#ifndef START_WIDGET_H
#define START_WIDGET_H
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QMenuBar>
#include "loginwidget.h"
#include "guest_widget.h"

class Start_widget : public QWidget
{
    Q_OBJECT
public:
    explicit Start_widget();
private:
    QLabel* welcomeLabels[2];
    QPushButton* startButtons[3];

signals:

public slots:
    void userRegister();
    void login();
    void guestlogin();

};

#endif // START_WIDGET_H
