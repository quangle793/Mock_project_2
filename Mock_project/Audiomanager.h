#ifndef AUDIOMANAGER_H
#define AUDIOMANAGER_H

#include <QObject>
#include <string>
#include <QMediaPlayer>
#include <iostream>
#include <QDebug>


class AudioManager : public QObject
{
    Q_OBJECT
private:
    int volume;
    QMediaPlayer *player;
public:
    AudioManager(QObject *parent = nullptr);
    Q_INVOKABLE void playMusic(const QString &filePath);

    void pause();

    Q_INVOKABLE void stopMusic();

    void seek(int position);

    void setVolume(int newVolume);
};

#endif // AUDIOMANAGER_H
