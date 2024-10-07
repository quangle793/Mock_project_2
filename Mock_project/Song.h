#ifndef SONG_H
#define SONG_H

#include <QObject>
#include <QString>
#include <QDebug>


class Song
{
private:
    QString title;
    QString artist;
    int duration;
    QString filePath;
public:
    Q_PROPERTY(Qstring filePath_ READ filePath_ WRITE setFilePath_ NOTIFY filePath_Changed)
    Song(const QString & title , const QString& artist , int duration , const QString filePath) ;


    QString getTitle() const ;
    QString getArtist() const;
    int getDuration();
    QString getFilePath();

};

#endif // SONG_H
