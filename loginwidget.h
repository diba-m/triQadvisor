#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H
#include <QWidget>
#include <QMessageBox>
#include <QObject>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QMenuBar>
#include <QString>

class LoginWidget : public QWidget
{
    Q_OBJECT
public:
    explicit LoginWidget();
    QString getUsername() const;
    QString getPassword() const;

private:
    QLabel* welcomeLabel;
    QLineEdit* lineEdits[2];
    QPushButton* enterButton;

signals:

public slots:
    void sendLogin();

};


#endif // LOGINWIDGET_H
