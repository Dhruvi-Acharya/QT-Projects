import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.3
import QtMultimedia 5.13

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("RTSP")

    MediaPlayer {
        id: videoPlayer
        source: "gst-pipeline: rtspsrc location=rtsp://172.25.15.77/live1s1.sdp user-id=admin user-pw=Admin@123 ! rtph264depay ! decodebin ! autovideosink"
        muted: true
        autoPlay: true
    }

    VideoOutput {
        id: camera1
        width: 500
        height: 500
        anchors.horizontalCenter: parent.horizontalCenter
        source: videoPlayer
    }

//        Video {
//            id: cam1Stream
//            x: 49
//            y: 91
//            width: 505
//            height: 336
//            source: "gst-pipeline: rtspsrc location=rtsp://172.25.15.77/live1s1.sdp user-id=admin user-pw=Admin@123 ! rtph264depay ! decodebin ! autovideosink"
//            autoPlay: true
//            opacity: 1.0
//            fillMode: Image.Stretch
//            muted: false
//        }
}
