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

public:
    explicit Person(QObject *parent = nullptr);

    QString firstname() const;
    void setFirstname(const QString &firstname);

    QString surname() const;
    void setSurname(const QString &surname);

    QString role() const;
    void setRole(const QString &role);

signals:
    void firstnameChanged(const QString &firstname);
    void surnameChanged(const QString &surname);
    void roleChanged(const QString &role);

private:
    QString _firstname;
    QString _surname;
    QString _role;
};

#endif // PERSON_H
