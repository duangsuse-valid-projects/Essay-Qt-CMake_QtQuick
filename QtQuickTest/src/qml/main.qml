import QtQuick 2.0
import QtQuick.Window 2.0

Window {
    visible: true
    
    width: 800; height: 600
    
    Rectangle {
        anchors.fill: parent
        color: "steelblue"
        Text {
            text: "Fooled bar"
            font {
                pixelSize: 200
            }
            color: "green"
        }
        
        TextEdit {
            height: 200
            anchors {
            }
        }
    }
}

