import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Dialogs 1.3
import Qt.labs.folderlistmodel 2.1
import QtMultimedia 5.14


ApplicationWindow {
    id : root

    visible: true

    width: 1920

    height: 1080

    property string selectedSongName: ""
    signal sendFilePath(string filePath)



    AlbumPopup {
        id: albumPopup // Đặt id để mở dialog từ đây
    }

    SelectPopup
    {
        id : selectPopup
    }

    // Mục Album (Bên trái)

    Rectangle {

        id: albumSection

        width: parent.width * 0.4

        height: parent.height

        color: "#ffffff"

        anchors.left: parent.left

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
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        root.selectedSongName = textSong.text;
                        audioManager.openFolder(model.filePath);
                        console.log("click")
                    }
                }
                Rectangle
                {
                    id : luachon
                    width: 50
                    height: 50
                    color: "#f0f0f0"
                    anchors.right: parent.right

                    Text {
                        id: name
                        text: qsTr("⋮")
                        anchors.centerIn: parent
                        font.pixelSize: 20
                    }

                    MouseArea
                    {
                        anchors.fill: parent
                        onClicked:
                        {
                            selectPopup.open()
                            console.log("filePath bai hat : ",model.filePath)
                            selectPopup.setFilePath(model.filePath)
                        }
                    }
                }
            }
        }
    }


    Rectangle {

        id: songInfoSection

        width: parent.width * 0.6

        height: parent.height

        color: "#ffffff"

        anchors.right: parent.right

        Column {

            anchors.fill: parent

            spacing: 20

            Rectangle {

                width: parent.width

                height: parent.height * 0.3

                color: "#e0e0e0"


                Text {

                    text: audioManager.getFileName(audioManager.songUI)
                    anchors.centerIn: parent

                    font.pixelSize: 48

                }

            }

            Rectangle {
                id: mainRect
                width: parent.width
                height: 50
                property int songDuration: 0
                property int currentTime: 0

                Row {
                    spacing: 10
                    anchors.fill: parent

                    // Slider
                    Slider {
                        id: progressBar
                        width: parent.width * 0.9
                        height: parent.height
                        from: 0
                        to: audioManager.durationSong
                        value: audioManager.currentTime

                        onValueChanged: {
                            if (pressed) {  // Khi kéo thanh tiến trình
                                player.seek(value * 1000);
                                console.log("Seeking to:", value);
                            }
                        }
                    }

                    Text {
                        text: audioManager.durationSong > 0 ? audioManager.handleDuration(audioManager.remainingTime) : ""
                        verticalAlignment: Text.AlignVCenter
                        width: parent.width * 0.2
                        anchors.verticalCenter: progressBar.verticalCenter
                    }
                }
            }

            Rectangle {

                width: parent.width

                height: parent.height * 0.2

                color: "#d0d0d0"

                Row {

                    anchors.centerIn: parent

                    spacing: 30

                    Button {

                        text: "<<"
                        onClicked: audioManager.previousMusic()

                    }

                    Button {

                        text: "Phát"
                        onClicked:
                        {
                            audioManager.playMusic();
                        }

                    }

                    Button {

                        text: "Dừng"
                         onClicked: audioManager.pauseMusic()
                    }

                    Button {

                        text: "Stop"
                         onClicked: audioManager.stopMusic()

                    }

                    Button {

                        text: ">>"
                        onClicked: audioManager.nextMusic()
                    }

                }

            }

            // Thông tin âm thanh (Tốc độ bit, định dạng)

            Rectangle {

                width: parent.width

                height: parent.height * 0.1

                color: "#e0e0e0"

                Row {
                    spacing: 10
                    anchors.fill: parent

                    Rectangle
                    {
                        width: 70
                        height: 70
                        border.color: "blue"
                        Text {
                            id: loaMusic
                            text: qsTr("LOA")
                            anchors.centerIn: parent
                        }
                        anchors.verticalCenter: volumeMusic.verticalCenter
                    }

                    // Slider
                    Slider {
                        id: volumeMusic
                        width: parent.width * 0.9
                        height: parent.height
                        from: 0
                        to: 1  // Âm lượng từ 0.0 đến 1.0
                        stepSize: 0.01  // Đặt bước nhảy
                        value: audioManager.volume // Lấy giá trị âm lượng từ AudioManager

                        onValueChanged: {
                            audioManager.setVolume(value)  // Gọi phương thức để cập nhật âm lượng
                            console.log("Volume set to:", value);
                        }
                    }
                }

            }

            // Xếp hạng sao

            Rectangle {

                width: parent.width

                height: parent.height * 0.1

                color: "#f0f0f0"

                Row {

                    anchors.centerIn: parent

                    spacing: 10

                    Repeater {

                        model: 5

                        Rectangle {

                            width: 48

                            height: 48

                            color: "yellow"

                            Text {

                                text: "★"

                                anchors.centerIn: parent

                                font.pixelSize: 32

                            }

                        }

                    }

                }

            }

            Rectangle {

                id: navBar

                width: parent.width

                height: parent.height * 0.2

                color: "#b0b0b0"

                FileDialog {
                    id: fileDialog
                    nameFilters: ["MP3 Files (*.mp3)"]
                    onAccepted: {
                        // Gọi hàm openFile từ C++
                        audioManager.openFolder(fileUrl.toString().replace("file://", ""))
                    }
                }


                Row {

                    anchors.centerIn: parent

                    spacing: 10

                    Button {

                        text: "PLAYLIST"

                    }

                   //  Hộp thoại để chọn file
                    Button {

                        text: "SONGS"


                    }


                    Button {

                        text: "ALBUMS"
                        onClicked: {
                                    albumPopup.open(); // Mở dialog khi nút được nhấp
                                }

                    }
                    Button {

                        text: "FOLDERS"
                        onClicked: fileDialog.open()
                    }

                }

            }

        }

    }
}
