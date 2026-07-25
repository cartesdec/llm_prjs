#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "person.h"
#include "variousmodels.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    
    // Create Person instance
    Person customer;
    
    // Create VariousModels instance
    VariousModels variousModels;
    
    // Export customer object to QML context
    engine.rootContext()->setContextProperty("customer", &customer);
    
    // Export variousModels object to QML context
    engine.rootContext()->setContextProperty("variousModels", &variousModels);
    
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
