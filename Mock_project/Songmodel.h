#ifndef SONGMODEL_H
#define SONGMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QString>
#include <QDebug>
#include <QFileInfo>

class Songmodel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit Songmodel(QObject *parent = nullptr);
    enum SongRoles {
        FilePathRole = Qt::UserRole + 1
    };
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    QHash<int, QByteArray> roleNames() const override;
    void addSong(const QString &filePath);

    QString getSongPath(int index) const;


signals:

private:
    QList<QString> m_songs;

};

#endif // SONGMODEL_H
