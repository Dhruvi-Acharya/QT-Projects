#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <singletonclass.h>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    qmlRegisterSingletonType("com.blikon.singletone",1,0,"MyApi",Singletonclass::singletonProvider);

//    qmlRegisterSingletonType(QUrl("qrc:/QmlSingletone.qml"),"com.blikon.singletoneqml",1,0,"qmlSingleton");

    // lambda function
//    qmlRegisterSingletonType("com.blikon.singletone",1,0,"MyApi",[](QQmlEngine *engine,QJSEngine *scriptEngine)->QJSValue{
//        int value=11;
//        QJSValue jsvalue = engine->newObject();
//        jsvalue.setProperty("val",value);
//        return jsvalue;
//    });

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
