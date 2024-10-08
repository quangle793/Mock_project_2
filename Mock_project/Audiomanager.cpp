#include "Audiomanager.h"

AudioManager::AudioManager(QObject *parent) : QObject(parent), player(new QMediaPlayer(this)), m_duration(0) {
    setVolume(1.0);
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
        int m_duration =  player->duration();

        qDebug() << "duration" <<m_duration;
        qDebug() << "filePath: " << filePath;
        filePath_new = filePath;

        connect(player, &QMediaPlayer::durationChanged, this, &AudioManager::onDurationChanged);
        connect(player, &QMediaPlayer::positionChanged, this, &AudioManager::onPositionChanged);

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

QString AudioManager::handleDuration(int duration)
{
    int minutes = duration / 60000;
    int seconds = (duration % 60000) / 1000;

    // In ra thời gian bài hát dưới dạng phút:giây
//	qDebug() << "Duration: " << minutes << "m " << seconds << "s";

    // Ví dụ: Nếu bạn muốn ghép chuỗi lại và lưu thành một chuỗi thời gian
    QString formattedDuration = QString("%1:%2")
            .arg(minutes)
            .arg(seconds, 2, 10, QLatin1Char('0'));  // Thêm số 0 nếu giây < 10

//	qDebug() << "Formatted Duration: " << formattedDuration;
    return formattedDuration;
}


void AudioManager::setSongModel(Songmodel *model)
{
    m_songModel = model;
}

void AudioManager::seek(int position)
{

}

void AudioManager::setVolume(qreal volume)
{
    qDebug() << "quang123";
    if (player) {
        player->setVolume(static_cast<int>(volume * 100));  // QMediaPlayer.setVolume nhận giá trị từ 0 đến 100
    }
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
    m_duration = static_cast<int>(duration); // Cập nhật thời gian bài hát
    qDebug() << "Duration:" << m_duration; // In ra thời gian bài hát
    setDurationSong(m_duration);
}

void AudioManager::setDurationSong(int durationSong)
{
    if (m_durationSong == durationSong)
        return;

    m_durationSong = durationSong;
    emit durationSongChanged(m_durationSong);
}

void AudioManager::onPositionChanged(qint64 position)
{
    m_currentTime = static_cast<int>(position);  // Cập nhật thời gian hiện tại (ms)
    emit currentTimeChanged();  // Gửi tín hiệu để cập nhật QML
    int remainingTime = m_duration - m_currentTime;  // Tính thời gian còn lại
    emit remainingTimeChanged();
}

int AudioManager::durationSong() const
{
    return m_durationSong;
}

int AudioManager::currentTime() const
{
    return m_currentTime;
}

int AudioManager::remainingTime() const
{
    return m_duration - m_currentTime;
}
