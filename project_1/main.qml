import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    visible: true
    width: 1000
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
                    id: firstNameField
                    placeholderText: qsTr("Enter first name")
                    text: customer.firstname
                    onTextChanged: customer.firstname = text
                }
            }

            ColumnLayout {
                spacing: 5

                Text {
                    text: qsTr("surname")
                }

                TextField {
                    id: surnameField
                    placeholderText: qsTr("Enter surname")
                    text: customer.surname
                    onTextChanged: customer.surname = text
                }
            }

            ColumnLayout {
                spacing: 5

                Text {
                    text: qsTr("role")
                }

                ComboBox {
                    model: ["admin", "user", "guest"]
                }
            }

            Item {
                Layout.fillWidth: true
            }
        }

        RowLayout {
            spacing: 20

            ColumnLayout {
                spacing: 5

                Text {
                    text: qsTr("street address")
                }

                TextField {
                    placeholderText: qsTr("Enter street address")
                }
            }

            ColumnLayout {
                spacing: 5

                Text {
                    text: qsTr("city")
                }

                TextField {
                    placeholderText: qsTr("Enter city")
                }
            }

            ColumnLayout {
                spacing: 5

                Text {
                    text: qsTr("postal code")
                }

                TextField {
                    placeholderText: qsTr("Enter postal code")
                }
            }

            ColumnLayout {
                spacing: 5

                Text {
                    text: qsTr("country")
                }

                ComboBox {
                    model: [
                        "Austria",
                        "Belgium",
                        "Bulgaria",
                        "Croatia",
                        "Cyprus",
                        "Czech Republic",
                        "Denmark",
                        "Estonia",
                        "Finland",
                        "France",
                        "Germany",
                        "Greece",
                        "Hungary",
                        "Ireland",
                        "Italy",
                        "Latvia",
                        "Lithuania",
                        "Luxembourg",
                        "Malta",
                        "Netherlands",
                        "Poland",
                        "Portugal",
                        "Romania",
                        "Slovakia",
                        "Slovenia",
                        "Spain",
                        "Sweden"
                    ]
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
