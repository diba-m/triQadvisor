#ifndef PROFILE_H
#define PROFILE_H
#include <QString>
#include <QList>



class profile{
private:
    QString name, surname, country, username, password;
    char type;
public:
    profile(const QString&,const QString&,const QString&,const QString&,
            const QString&, const char&);
    void showProfile() const;
    void editProfile(const QString&,const QString&,const QString&,const QString&,
                     const QString&, const char&);
    QString get_name() const;
    QString get_surname() const;
    QString get_country() const;
    QString get_city() const;
    QString get_username() const;
    QString get_password() const;
    int get_age() const;
    char get_gender() const;
    char get_type() const;
    void showProperties();


};

#endif
