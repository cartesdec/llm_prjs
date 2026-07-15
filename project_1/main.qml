import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    visible: true
    width: 800
    height: 600
    title: qsTr("Project 1")

    ColumnLayout {
        anchors.fill: parent
        anchors.margins: 20
        spacing: 10

        RowLayout {
            spacing: 20

            ColumnLayout {
                spacing: 5

                Text {
                    text: qsTr("first name")
                }

                TextField {
                    id: reference
                    placeholderText: qsTr("Enter first name")
                }
            }

            ColumnLayout {
                spacing: 5

                Text {
                    text: qsTr("surname")
                }

                TextField {
                    placeholderText: qsTr("Enter surname")
                }
            }

            Item {
                Layout.fillWidth: true
            }
        }

        Item {
            Layout.fillHeight: true
        }
    }
}
