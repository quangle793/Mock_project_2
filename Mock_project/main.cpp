#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "Audiomanager.h"
#include "SongListModel.h"

int main(int argc, char *argv[]) {
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    SongListModel songListModel;
    app.setOrganizationName("YourOrganizationName");
    app.setOrganizationDomain("yourorganizationdomain.com");
    qmlRegisterType<AudioManager>("com.example.music", 1, 0, "AudioManager");  // Sửa thành AudioManager
    engine.rootContext()->setContextProperty("SongListModel", &songListModel);
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
&app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
