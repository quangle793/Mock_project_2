#ifndef AUDIOMANAGER_H
#define AUDIOMANAGER_H

#include <QObject>
#include <string>
#include <QMediaPlayer>
#include <iostream>
#include <QDebug>
#include "Audiomanager.h"
#include "Songmodel.h"


class AudioManager : public QObject
{
    Q_OBJECT
private:
    int volume;
    int m_duration;
    QMediaPlayer *player;
    QString filePath_new;
    Songmodel *m_songModel ;
    int m_currentSongIndex = -1;
    QString m_songUI;

public:
    AudioManager(QObject *parent = nullptr);

    Q_PROPERTY(QString songUI READ songUI WRITE setSongUI NOTIFY songUIChanged)
    Q_INVOKABLE void playMusic();

    Q_INVOKABLE void pauseMusic();

    Q_INVOKABLE void stopMusic();

    Q_INVOKABLE void nextMusic();

    Q_INVOKABLE void previousMusic();

    Q_INVOKABLE void openFolder(const QString &filePath);

    Q_INVOKABLE void addSongToModel(const QString &filePath);

    Q_INVOKABLE int getDuration() const;

    void handleAddSong();

    void setSongModel(Songmodel *model);
    void seek(int position);

    void setVolume(int newVolume);

    void emitSignal();

    Q_INVOKABLE QString getFileName(const QString &filePath);
    QString songUI() const;

public slots:
    void setSongUI(QString songUI);
    void onDurationChanged(qint64 duration);

signals:
    void filePathSent(QString filePath);
    void songUIChanged(QString songUI);
};



#endif // AUDIOMANAGER_H
