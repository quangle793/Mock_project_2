// AlbumPopup.qml
import QtQuick 2.14
import QtQuick.Controls 2.14

Dialog {
    id: albumDialog
    width: 1920 * 0.4 - 30
    height: 1080

    ListFavoritePopup
    {
        id : listFavoritePopup
    }


    Rectangle {
        id: albumMusic
        width: parent.width
        height: parent.height
        anchors.fill: parent

        Column {
            anchors.fill: parent

            Button {
                text: "MUSIC FAVORITE"
                width: parent.width
                height: 50
                onClicked:
                {
                    listFavoritePopup.open()
                }
            }

            Button {
                text: "MUSIC ANIME"
                width: parent.width
                height: 50
            }

            Button {
                text: "MUSIC KPOP"
                width: parent.width
                height: 50
            }
        }
    }
}
