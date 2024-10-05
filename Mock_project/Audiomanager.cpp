#include "Audiomanager.h"

AudioManager::AudioManager(QObject *parent): QObject(parent)
{
    player = new QMediaPlayer(this);
}

void AudioManager::playMusic(const QString &filePath)
{
    if (filePath.isEmpty()) {
        qDebug() << "File path is empty";
        return;
    }
    QUrl fileUrl = QUrl::fromLocalFile(filePath);
    player->setMedia(fileUrl);
    qDebug() << " fileUrl :" << fileUrl;
    player->play();
}

void AudioManager::pause()
{

}

void AudioManager::stopMusic()
{
     player->stop();
}

void AudioManager::seek(int position)
{

}

void AudioManager::setVolume(int newVolume)
{

}
