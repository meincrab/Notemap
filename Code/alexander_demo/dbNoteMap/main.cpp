#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>



#include <QObject>
#include <QGeoCodingManager>
#include <QGeoAddress>
#include <QGeoLocation>
#include <QGeoCoordinate>
#include <QGeoServiceProvider>
#include <QDebug>
#include <QGeoCodeReply>


#include "database.h"
#include "listmodel.h"
#include "dateclass.h"
#include "locationparser.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    DataBase database;
    database.connectToDataBase();

    ListModel *model = new ListModel();  
    DateClass* dateClass = new DateClass();
    LocationParser* locationParser  = new LocationParser();


    engine.rootContext()->setContextProperty("dateClass", dateClass);
    engine.rootContext()->setContextProperty("myModel", model);
    engine.rootContext()->setContextProperty("database", &database);
    engine.rootContext()->setContextProperty("locationParser", locationParser);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    return app.exec();
}
