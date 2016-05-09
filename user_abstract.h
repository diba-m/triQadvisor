#ifndef USER_ABSTRACT_H
#define USER_ABSTRACT_H

#include <QObject>

class User_Abstract : public QObject
{
    Q_OBJECT
public:
    explicit User_Abstract(QObject *parent = 0);

signals:

public slots:

};

#endif // USER_ABSTRACT_H
