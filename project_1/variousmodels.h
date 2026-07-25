#ifndef VARIOUSMODELS_H
#define VARIOUSMODELS_H

#include <QObject>
#include <QStringList>

class VariousModels : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QStringList countriesList READ countriesList CONSTANT)

public:
    explicit VariousModels(QObject *parent = nullptr);

    QStringList countriesList() const;

private:
    QStringList _countriesList;
};

#endif // VARIOUSMODELS_H
