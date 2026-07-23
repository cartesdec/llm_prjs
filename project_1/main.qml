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
                    id: roleComboBox
                    model: ["admin", "user", "guest"]
                    currentIndex: model.indexOf(customer.role)
                    onCurrentIndexChanged: {
                        if (model[currentIndex] !== customer.role) {
                            customer.role = model[currentIndex]
                        }
                    }
                    Component.onCompleted: {
                        currentIndex = model.indexOf(customer.role)
                    }
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
                    id: streetAddressField
                    placeholderText: qsTr("Enter street address")
                    text: customer.streetAddress
                    onTextChanged: customer.streetAddress = text
                }
            }

            ColumnLayout {
                spacing: 5

                Text {
                    text: qsTr("city")
                }

                TextField {
                    id: cityField
                    placeholderText: qsTr("Enter city")
                    text: customer.city
                    onTextChanged: customer.city = text
                }
            }

            ColumnLayout {
                spacing: 5

                Text {
                    text: qsTr("postal code")
                }

                TextField {
                    id: postalCodeField
                    placeholderText: qsTr("Enter postal code")
                    text: customer.postalCode
                    onTextChanged: customer.postalCode = text
                }
            }

            ColumnLayout {
                spacing: 5

                Text {
                    text: qsTr("country")
                }

                ComboBox {
                    id: countryComboBox
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
                    currentIndex: model.indexOf(customer.country)
                    onCurrentIndexChanged: {
                        if (model[currentIndex] !== customer.country) {
                            customer.country = model[currentIndex]
                        }
                    }
                    Component.onCompleted: {
                        currentIndex = model.indexOf(customer.country)
                    }
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
