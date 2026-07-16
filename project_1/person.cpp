#include "person.h"

Person::Person(QObject *parent)
    : QObject(parent), _firstname(""), _surname(""), _role("")
{
}

QString Person::firstname() const
{
    return _firstname;
}

void Person::setFirstname(const QString &firstname)
{
    if (_firstname != firstname) {
        _firstname = firstname;
        emit firstnameChanged(_firstname);
    }
}

QString Person::surname() const
{
    return _surname;
}

void Person::setSurname(const QString &surname)
{
    if (_surname != surname) {
        _surname = surname;
        emit surnameChanged(_surname);
    }
}

QString Person::role() const
{
    return _role;
}

void Person::setRole(const QString &role)
{
    if (_role != role) {
        _role = role;
        emit roleChanged(_role);
    }
}
