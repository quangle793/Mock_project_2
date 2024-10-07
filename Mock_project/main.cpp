#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "Audiomanager.h"
#include "Songmodel.h"
#include "Song.h"
#include "UIController.h"
#include "Songmodel.h"

int main(int argc, char *argv[]) {
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);
    QCoreApplication::setOrganizationName("YourOrganizationName");
    QCoreApplication::setOrganizationDomain("yourorganizationdomain.com");
//	AudioManager audiomanager;
//	UIController uiController;

//	QObject::connect(&audiomanager, &AudioManager::filePathSent, &uiController, &UIController::onFilePathReceived);

    Songmodel songModel;
       AudioManager audioManager;
       audioManager.setSongModel(&songModel);

       // Tạo QQmlApplicationEngine
       QQmlApplicationEngine engine;

       // Truyền các đối tượng C++ vào QML
       engine.rootContext()->setContextProperty("audioManager", &audioManager);
       engine.rootContext()->setContextProperty("songModel", &songModel);


    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
&app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
