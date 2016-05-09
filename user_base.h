#ifndef USER_BASE_H
#define USER_BASE_H

#include <QObject>

class User_Base : public QObject
{
    Q_OBJECT
public:
    explicit User_Base(QObject *parent = 0);

signals:

public slots:

};

#endif // USER_BASE_H
