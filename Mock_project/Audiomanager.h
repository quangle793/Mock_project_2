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
    Q_INVOKABLE void playMusic();

    Q_INVOKABLE void pauseMusic();

    Q_INVOKABLE void stopMusic();

    Q_INVOKABLE void openFolder(const QString &filePath);

    void seek(int position);

    void setVolume(int newVolume);
};

#endif // AUDIOMANAGER_H
