#include "Song.h"

Song::Song(const QString & title , const QString& artist , int duration , const QString filePath): title(title) , artist(artist) , duration(duration), filePath(filePath)
{

}

QString Song::getTitle() const
{
    return title;
}

QString Song::getArtist() const
{
    return artist;
}

int Song::getDuration()
{
    return duration;
}

QString Song::getFilePath()
{
    return filePath;
}
