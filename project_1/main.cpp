#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "person.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    
    // Create Person instance
    Person customer;
    
    // Export customer object to QML context
    engine.rootContext()->setContextProperty("customer", &customer);
    
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
