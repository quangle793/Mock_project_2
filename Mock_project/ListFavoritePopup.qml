import QtQuick 2.14
import QtQuick.Controls 2.14

Dialog {
    id: albumDialog
Rectangle {
    width: 1920 * 0.4 - 35
    height: 1080
    color : "lightblue"
    x : -21
    y : -21
    ListView {
        id : listSong
        anchors.fill: parent
        model: songModel
        delegate: Rectangle {
            width: parent.width
            height: 50
            color: "#f0f0f0"

            Text {
                id : textSong
                text: audioManager.getFileName(model.filePath)
                anchors.centerIn: parent
            }
        }
    }
}
}
