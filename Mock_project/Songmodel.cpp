#include "Songmodel.h"

SongModel::SongModel(QAbstractListModel *parent) : QAbstractListModel{parent}
{

}

void SongModel::addSong(const Song &song)
{
    beginInsertRows(QModelIndex(),rowCount(), rowCount());
    m_songs << song;
    endInsertRows();
}

int SongModel::rowCount(const QModelIndex &parent) const
{
    return m_songs.count();
}

QVariant SongModel::data(const QModelIndex &index, int role) const
{
    if(index.row() < 0 || index.row() >= m_songs.count())
    {
        return QVariant();
    }
    const Song& song = m_songs[index.row()];
    if(role == titleRole)
    {
        return song.getTitle();
    }
    else if(role == artistRole)
    {
        return song.getArtist();
    }
    return QVariant();
}

QHash<int, QByteArray> SongModel::roleNames() const
{
    QHash<int,QByteArray> roles;
    roles[titleRole] = "title" ;
    roles[artistRole] = "artist";
    return roles;
}
