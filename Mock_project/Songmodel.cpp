#include "Songmodel.h"

Songmodel::Songmodel(QObject *parent)
    : QAbstractListModel{parent}
{

}

int Songmodel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_songs.count();
}

QVariant Songmodel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || index.row() >= m_songs.size())
        return QVariant();

    const QString &filePath = m_songs[index.row()];

    if (role == FilePathRole)
        return filePath;

    return QVariant();
}

QHash<int, QByteArray> Songmodel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[FilePathRole] = "filePath";
    return roles;
}

void Songmodel::addSong(const QString &filePath)
{
    // Lấy tên file từ đường dẫn
//	QFileInfo fileInfo(filePath);
//	QString baseName = fileInfo.completeBaseName(); // Lấy tên file mà không có phần mở rộng

//	// Debug tên file đã được xử lý
//	qDebug() << "Processed file name: " << baseName;

    if (m_songs.contains(filePath)) {
        qDebug() << "Song already exists: " << filePath;
        return;  // Nếu đã tồn tại, không thêm vào
    }

    // Nếu chưa tồn tại, thêm vào danh sách
    beginInsertRows(QModelIndex(), m_songs.size(), m_songs.size());
    m_songs.append(filePath);
    endInsertRows();
}

QString Songmodel::getSongPath(int index) const
{
    if (index >= 0 && index < m_songs.size()) {
            return m_songs.at(index);
        }
        return QString();
}
