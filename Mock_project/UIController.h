#ifndef UICONTROLLER_H
#define UICONTROLLER_H

#include <QObject>
#include <Song.h>

class UIController : public QObject
{
    Q_OBJECT
public:
    UIController();

    void updateSongInfo(const Song& song);

    void updateProgress(int position);

    void updatPlayPause(bool inPlaying);

    void updateVolume(int volume);
};

#endif // UICONTROLLER_H
