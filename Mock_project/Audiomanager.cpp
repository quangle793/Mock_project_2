#include "Audiomanager.h"

AudioManager::AudioManager(QObject *parent): QObject(parent)
{
    player = new QMediaPlayer(this);
}

void AudioManager::playMusic()
{
    player->play();
     qDebug() << "play";
}

void AudioManager::pauseMusic()
{
    player->pause();
    qDebug() << "pause";
}

void AudioManager::stopMusic()
{
     player->stop();
     qDebug() << "stop";
}

void AudioManager::openFolder(const QString &filePath)
{
    if (filePath.isEmpty()) {
        qDebug() << "File path is empty";
        return;
    }
    QUrl fileUrl = QUrl::fromLocalFile(filePath);
    player->setMedia(fileUrl);
    qDebug() << " fileUrl :" << fileUrl;
    player->play();
    qDebug() << "filePath" << filePath ;
}

void AudioManager::seek(int position)
{

}

void AudioManager::setVolume(int newVolume)
{

}
