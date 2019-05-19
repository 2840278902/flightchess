import VPlay 2.0
import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Controls 1.4
import QtQuick 2.7

GameWindow {
    id: window
    visible: true
    width: 100
    height: 100
    property int flag: 1
    property var imgList: [img1, img2, img3, img4, img5, img6, img7, img8, img9, img10, img11, img12, img13]

    Rectangle {
        visible: false
        StackView {
            id: stack
            anchors.fill: parent
            initialItem: img1
            delegate: StackViewDelegate {
                function transitionFinished(properties) {
                    properties.exitItem.opacity = 1
                }
                //            pushTransition: StackViewTransition {
                //                PropertyAnimation {
                //                    target: enterItem
                //                    property: "opacity"
                //                    //                    from: 0
                //                    //                    to: 1
                //                    duration: 10
                //                }
                //                PropertyAnimation {
                //                    target: exitItem
                //                    property: "opacity"
                //                    //                    from: 1
                //                    //                    to: 0
                //                    duration: 10
                //                }
                //            }
            }
        }
        Image {
            id: img1
            source: "../assets/saizi1.png"
            visible: false
        }
        Image {
            id: img2
            source: "../assets/saizi2.png"
            visible: false
        }
        Image {
            id: img3
            source: "../assets/saizi3.png"
            visible: false
        }
        Image {
            id: img4
            source: "../assets/saizi4.png"
            visible: false
        }
        Image {
            id: img5
            source: "../assets/saizi5.png"
            visible: false
        }
        Image {
            id: img6
            source: "../assets/saizi6.png"
            visible: false
        }
        Image {
            id: img7
            source: "../assets/saizi7.png"
            visible: false
        }
        Image {
            id: img8
            source: "../assets/saizi8.png"
            visible: false
        }
        Image {
            id: img9
            source: "../assets/saizi9.png"
            visible: false
        }
        Image {
            id: img10
            source: "../assets/saizi10.png"
            visible: false
        }
        Image {
            id: img11
            source: "../assets/saizi11.png"
            visible: false
        }
        Image {
            id: img12
            source: "../assets/saizi12.png"
            visible: false
        }
        Image {
            id: img13
            source: "../assets/saizi13.png"
            visible: false
        }

        //    Image {
        //        id: img14
        //        source: "../assets/saizi14.png"
        //        visible: false
        //    }
        Timer {
            id: time
            interval: 100
            repeat: true
            running: true
            onTriggered: {
                stack.push({
                               item: imgList[flag % 13],
                               immediate: false,
                               replace: true
                           })
                flag++
            }
        }
        MouseArea {
            anchors.fill: parent
            onClicked: {
                time.running = !time.running
            }
        }
    }
}
