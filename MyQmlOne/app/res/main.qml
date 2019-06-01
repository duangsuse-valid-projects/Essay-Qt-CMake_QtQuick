import QtQuick 2.0
import QtQuick.Window 2.0

Window {
    visible: true
    width: 800
    height: 600
    color: "steelblue"
    
    Text {
        anchors.centerIn: parent
        font {
            weight: FontWeight.Thin
            pixelSize: 20
        }
        text: "Hello, Qt Quick!"
    }
}
