#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QString>

class Person : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString firstname READ firstname WRITE setFirstname NOTIFY firstnameChanged)
    Q_PROPERTY(QString surname READ surname WRITE setSurname NOTIFY surnameChanged)
    Q_PROPERTY(QString role READ role WRITE setRole NOTIFY roleChanged)
    Q_PROPERTY(QString streetAddress READ streetAddress WRITE setStreetAddress NOTIFY streetAddressChanged)
    Q_PROPERTY(QString city READ city WRITE setCity NOTIFY cityChanged)
    Q_PROPERTY(QString postalCode READ postalCode WRITE setPostalCode NOTIFY postalCodeChanged)
    Q_PROPERTY(QString country READ country WRITE setCountry NOTIFY countryChanged)

public:
    explicit Person(QObject *parent = nullptr);

    QString firstname() const;
    void setFirstname(const QString &firstname);

    QString surname() const;
    void setSurname(const QString &surname);

    QString role() const;
    void setRole(const QString &role);

    QString streetAddress() const;
    void setStreetAddress(const QString &streetAddress);

    QString city() const;
    void setCity(const QString &city);

    QString postalCode() const;
    void setPostalCode(const QString &postalCode);

    QString country() const;
    void setCountry(const QString &country);

signals:
    void firstnameChanged(const QString &firstname);
    void surnameChanged(const QString &surname);
    void roleChanged(const QString &role);
    void streetAddressChanged(const QString &streetAddress);
    void cityChanged(const QString &city);
    void postalCodeChanged(const QString &postalCode);
    void countryChanged(const QString &country);

private:
    QString _firstname;
    QString _surname;
    QString _role;
    QString _streetAddress;
    QString _city;
    QString _postalCode;
    QString _country;
};

#endif // PERSON_H
