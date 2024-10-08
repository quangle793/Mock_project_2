#ifndef AUDIOMANAGER_H
#define AUDIOMANAGER_H

#include <QObject>
#include <string>
#include <QMediaPlayer>
#include <iostream>
#include <QDebug>
#include "Songmodel.h"


class AudioManager : public QObject
{
    Q_OBJECT
private:
    int volume;
    int m_duration;
    int m_durationSong;
    int m_currentTime;
    int m_currentSongIndex = -1;
    QMediaPlayer *player;
    QString filePath_new;
    Songmodel *m_songModel ;
    QString m_songUI;

    int m_remainingTime;

public:

    AudioManager(QObject *parent = nullptr);

    Q_PROPERTY(QString songUI READ songUI WRITE setSongUI NOTIFY songUIChanged)
    Q_PROPERTY(int durationSong READ durationSong WRITE setDurationSong NOTIFY durationSongChanged)
    Q_PROPERTY(int currentTime READ currentTime NOTIFY currentTimeChanged)
    Q_PROPERTY(int remainingTime READ remainingTime NOTIFY remainingTimeChanged)

    Q_INVOKABLE void playMusic();

    Q_INVOKABLE void pauseMusic();

    Q_INVOKABLE void stopMusic();

    Q_INVOKABLE void nextMusic();

    Q_INVOKABLE void previousMusic();

    Q_INVOKABLE void openFolder(const QString &filePath);

    Q_INVOKABLE void addSongToModel(const QString &filePath);

    Q_INVOKABLE int getDuration() const;

    Q_INVOKABLE QString handleDuration(int duration);

    Q_INVOKABLE QString getFileName(const QString &filePath);

    Q_INVOKABLE void setVolume(qreal volume);

    void handleAddSong();

    void setSongModel(Songmodel *model);

    void seek(int position);

    void emitSignal();

    int durationSong() const;

    int currentTime() const;

    QString songUI() const;

    int remainingTime() const;

public slots:
    void setSongUI(QString songUI);
    void onDurationChanged(qint64 duration);
    void setDurationSong(int durationSong);
    void onPositionChanged(qint64 position);

signals:
    void filePathSent(QString filePath);
    void songUIChanged(QString songUI);
    void durationChanged(int duration);
    void durationSongChanged(int durationSong);
    void currentTimeChanged();
    void remainingTimeChanged();
};



#endif // AUDIOMANAGER_H
