#ifndef SONG_H
#define SONG_H

#include <QObject>
#include <QString>


class Song
{
private:
    QString title;
    QString artist;
    int duration;
    QString filePath;
public:
    Song(const QString & title , const QString& artist , int duration , const QString filePath) ;


    QString getTitle() const ;
    QString getArtist() const;
    int getDuration();
    QString getFilePath();
};

#endif // SONG_H
