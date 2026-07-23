#include "person.h"

Person::Person(QObject *parent)
    : QObject(parent), _firstname(""), _surname(""), _role(""), _streetAddress(""), _city(""), _postalCode(""), _country("")
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

QString Person::streetAddress() const
{
    return _streetAddress;
}

void Person::setStreetAddress(const QString &streetAddress)
{
    if (_streetAddress != streetAddress) {
        _streetAddress = streetAddress;
        emit streetAddressChanged(_streetAddress);
    }
}

QString Person::city() const
{
    return _city;
}

void Person::setCity(const QString &city)
{
    if (_city != city) {
        _city = city;
        emit cityChanged(_city);
    }
}

QString Person::postalCode() const
{
    return _postalCode;
}

void Person::setPostalCode(const QString &postalCode)
{
    if (_postalCode != postalCode) {
        _postalCode = postalCode;
        emit postalCodeChanged(_postalCode);
    }
}

QString Person::country() const
{
    return _country;
}

void Person::setCountry(const QString &country)
{
    if (_country != country) {
        _country = country;
        emit countryChanged(_country);
    }
}
