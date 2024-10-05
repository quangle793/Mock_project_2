#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QObject>
#include <Song.h>
#include <Audiomanager.h>
#include <UIController.h>

class MusicPlayer : public QObject
{
    Q_OBJECT
private:
    Song currentSong;
    AudioManager audioManager;
    UIController uiController;
public:

    void pauseSong();

    void nextSong() ;

    void perviousSong();

    void seek(int position); // tua nhac
};

#endif // MUSICPLAYER_H
