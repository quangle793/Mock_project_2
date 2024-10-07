#include "Audiomanager.h"

AudioManager::AudioManager(QObject *parent) : QObject(parent), player(new QMediaPlayer(this)), m_duration(0) {
    connect(player, &QMediaPlayer::durationChanged, this, &AudioManager::onDurationChanged);
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

void AudioManager::nextMusic()
{
    qDebug() << "in nextMusic";
    if (m_songModel) {
        int songCount = m_songModel->rowCount(); // Lấy số bài hát trong model
        if (songCount == 0) {
            qDebug() << "No songs available to play.";
            return;
        }

        m_currentSongIndex = (m_currentSongIndex + 1) % songCount; // Chuyển đến bài hát tiếp theo, vòng lại nếu đến cuối
        QString nextSongPath = m_songModel->getSongPath(m_currentSongIndex);
        qDebug() << "nextSongPath" << nextSongPath;

        openFolder(nextSongPath); // Gọi phương thức để phát bài hát tiếp theo
//		playMusic();
    }
}

void AudioManager::previousMusic()
{
    if (m_songModel) {
        int songCount = m_songModel->rowCount(); // Lấy số bài hát trong model
        if (songCount == 0) {
            qDebug() << "No songs available to play.";
            return;
        }

        m_currentSongIndex = (m_currentSongIndex - 1 + songCount) % songCount; // Chuyển về bài hát trước
        QString previousSongPath = m_songModel->getSongPath(m_currentSongIndex);

        openFolder(previousSongPath); // Gọi phương thức để phát bài hát trước
//		playMusic();
    }
}

void AudioManager::openFolder(const QString &filePath)
{
    if (filePath.isEmpty()) {
            qDebug() << "File path is empty";
            return;
        }

        // Phát bài hát
        QUrl fileUrl = QUrl::fromLocalFile(filePath);
        player->setMedia(fileUrl);
        qDebug() << "fileUrl: " << fileUrl;
        player->play();
        qDebug() << "filePath: " << filePath;
        filePath_new = filePath;

        handleAddSong();
        getFileName(filePath);
        setSongUI(filePath);
        qDebug() << "getFileName" << getFileName(filePath);
}

void AudioManager::handleAddSong()
{
    // Thêm vào SongModel
    if (m_songModel) {
        m_songModel->addSong(filePath_new);  // Truyền tên file đã xử lý vào addSong
    } else {
        qDebug() << "SongModel is not set.";
    }
}

void AudioManager::addSongToModel(const QString &filePath)
{

}

int AudioManager::getDuration() const
{
     return m_duration;
}


void AudioManager::setSongModel(Songmodel *model)
{
    m_songModel = model;
}

void AudioManager::seek(int position)
{

}

void AudioManager::setVolume(int newVolume)
{

}

QString AudioManager::getFileName(const QString &filePath)
{
    return QFileInfo(filePath).baseName();
}

QString AudioManager::songUI() const
{
    return m_songUI;
}

void AudioManager::setSongUI(QString songUI)
{
    if (m_songUI == songUI)
        return;

    m_songUI = songUI;
    emit songUIChanged(m_songUI);
}

void AudioManager::onDurationChanged(qint64 duration)
{
    m_duration = static_cast<int>(duration);
}
