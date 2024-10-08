import QtQuick 2.14
import QtQuick.Controls 2.14

Dialog {
    id: albumDialog

    property string receivedText: ""
    property string receivedFilePath: ""

    // Hàm để nhận filePath từ main.qml
       function setFilePath(filePath) {
           buttonfavorite.receivedString = filePath
       }

    Rectangle
    {
        width: 150
        height: 90
        color : "lightblue"
        x : 730

        Column {
            anchors.fill: parent

            Button {
                id : buttonfavorite
                text: "MUSIC FAVORITE"
                width: parent.width
                height: 30
                opacity: 0.7
                property string receivedString  : ""
                Connections {
                    target: selectPopup
                    onFilePathReceived: selectPopup.setFilePath
                }

//                onSendFilePath: selectPopup.setFilePath(model.filePath)
                onClicked: {
                    console.log("Button clicked, received text:",receivedString)  // Hiển thị nội dung nhận được
                }
            }

            Button {
                text: "MUSIC ANIME"
                width: parent.width
                height: 30
                opacity: 0.7
            }

            Button {
                text: "MUSIC KPOP"
                width: parent.width
                height: 30
                opacity: 0.7
            }
        }
    }
}
