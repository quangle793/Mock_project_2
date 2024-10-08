#include "MusicFavorite.h"

MusicFavorite::MusicFavorite(QObject *parent)
    : QAbstractListModel{parent}
{

}

int MusicFavorite::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_songs.count();
}

QVariant MusicFavorite::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || index.row() >= m_songs.size())
        return QVariant();

    const QString &filePath = m_songs[index.row()];

    if (role == FilePathRole)
        return filePath;

    return QVariant();
}

QHash<int, QByteArray> MusicFavorite::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[FilePathRole] = "filePath";
    return roles;
}

void MusicFavorite::addSong(const QString &filePath)
{
    if (m_songs.contains(filePath)) {
        qDebug() << "Song already exists: " << filePath;
        return;
    }

    beginInsertRows(QModelIndex(), m_songs.size(), m_songs.size());
    m_songs.append(filePath);
    endInsertRows();
}

QString MusicFavorite::getSongPath(int index) const
{
    if (index >= 0 && index < m_songs.size()) {
        return m_songs.at(index);
    }
    return QString();
}
