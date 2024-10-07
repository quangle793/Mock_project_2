import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Dialogs 1.3
//import com.example.music 1.0
import Qt.labs.folderlistmodel 2.1
//import com.example.songmodel 1.0
import QtMultimedia 5.14

ApplicationWindow {
    id : root

    visible: true

    width: 1920

    height: 1080

    property string selectedSongName: ""

    property int songDuration: 0  // Thời lượng bài hát
    property int currentTime: 0   // Thời gian phát hiện tại

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

            // Tên bài hát và nghệ sĩ

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
                width: parent.width
                height: 10


                MediaPlayer {
                    id: player
                    source: audioManager.songUI  // Đảm bảo rằng audioManager.songUI chứa đường dẫn bài hát

                    onDurationChanged: {
                        songDuration = Math.floor(duration / 1000);  // Đổi từ milliseconds sang seconds
                        console.log("Duration:", songDuration);      // Kiểm tra thời lượng bài hát
                    }

                    onPositionChanged: {
                        currentTime = Math.floor(position / 1000);  // Đổi từ milliseconds sang seconds
                        console.log("Current Time:", currentTime);  // Kiểm tra thời gian hiện tại
                    }
                }

                Column {
                    width: parent.width
                    padding: 20

                    // Hiển thị thời gian hiện tại và tổng thời gian của bài hát
                    Row {
                        spacing: 10
                        Text {
                            text: Qt.formatTime(currentTime * 1000, "mm:ss")  // Hiển thị thời gian hiện tại
                        }

                        Text {
                            text: "/"
                        }

                        Text {
                            text: Qt.formatTime(songDuration * 1000, "mm:ss")  // Hiển thị tổng thời gian bài hát
                        }
                    }

                    // Thanh tiến trình
                    Slider {
                        id: progressBar
                        width: parent.width * 0.9
                        from: 0
                        to: songDuration  // Đặt giới hạn thanh tiến trình là thời lượng bài hát
                        value: currentTime  // Giá trị hiện tại của thanh tiến trình

                        onValueChanged: {
                            if (pressed) {  // Khi kéo thanh tiến trình
                                player.seek(value * 1000);  // Đổi lại sang milliseconds
                                console.log("Seeking to:", value);
                            }
                        }
                    }
                }
            }


            // Các nút điều khiển (Phát/Tạm dừng, Bỏ qua)

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

                Text {

                    text: "Tốc độ bit: 320kbps - Định dạng: MP3"

                    anchors.centerIn: parent

                    font.pixelSize: 32

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
