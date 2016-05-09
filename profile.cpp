#include "profile.h"


profile::profile(const QString& n,const QString& s,const QString& cntr,const QString& user,const QString& pass, const char& t): name(n), surname(s), country(cntr), username(user), password(pass), type(t) {}
QString profile::get_name() const
{
    return name;
}
QString profile::get_surname() const
{
    return surname;
}
QString profile::get_country() const
{
    return country;
}
QString profile::get_username() const
{
    return username;
}
QString profile::get_password() const
{
    return password;
}
char profile::get_type() const
{
    return type;
}
void profile::showProperties()
{

}
