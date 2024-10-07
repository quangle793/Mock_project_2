#ifndef UICONTROLLER_H
#define UICONTROLLER_H

#include <QObject>
#include <Song.h>
#include <QString>

class UIController : public QObject
{
    Q_OBJECT
public:
    UIController();

    void updateSongInfo(const Song& song);

    void updateProgress(int position);

    void updatPlayPause(bool inPlaying);

    void updateVolume(int volume);
public slots:
    void onFilePathReceived(QString value);
};

#endif // UICONTROLLER_H
