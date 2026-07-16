#include "person.h"

Person::Person(QObject *parent)
    : QObject(parent), _firstname(""), _surname("")
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
