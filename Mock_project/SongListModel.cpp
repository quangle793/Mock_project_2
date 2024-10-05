#include "SongListModel.h"

SongListModel::SongListModel(QAbstractListModel *parent) : QAbstractListModel{parent}
{

}

void SongListModel::addSong(const Song &song)
{
    beginInsertRows(QModelIndex(),rowCount(), rowCount());
    m_songs << song;
    endInsertRows();
}

int SongListModel::rowCount(const QModelIndex &parent) const
{
    return m_songs.count();
}

QVariant SongListModel::data(const QModelIndex &index, int role) const
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

QHash<int, QByteArray> SongListModel::roleNames() const
{
    QHash<int,QByteArray> roles;
    roles[titleRole] = "title" ;
    roles[artistRole] = "artist";
    return roles;
}
