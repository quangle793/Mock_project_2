#ifndef SONGMODEL_H
#define SONGMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <Song.h>

class SongModel : public QAbstractListModel
{
    Q_OBJECT
public:
    SongModel(QAbstractListModel *parent = nullptr);

    enum SongRoles {
            titleRole = Qt::UserRole + 1,
            artistRole
        };

    void addSong(const Song& song);

    int rowCount(const QModelIndex &parent = QModelIndex())const override ;

    QVariant data(const QModelIndex &index, int role) const override;

    QHash<int,QByteArray> roleNames() const override;

private :
    QList<Song>m_songs;

};

#endif // SONGMODEL_H
