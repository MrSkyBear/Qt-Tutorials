import QtQuick 2.4
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.3

Item {
    id: content
    width: 400
    height: 400
    property alias gridLayout1: gridLayout1
    property alias customerId: customerId
    property alias lastName: lastName
    property alias firstName: firstName
    property alias title: title
    property alias cancel: cancel
    property alias save: save
    property alias rowLayout: rowLayout

    GridLayout {
        id: gridLayout1
        height: 100
        rows: 4
        columns: 3
        rowSpacing: 8
        columnSpacing: 8
        anchors.right: parent.right
        anchors.rightMargin: 12
        anchors.left: parent.left
        anchors.leftMargin: 12
        anchors.top: parent.top
        anchors.topMargin: 12

        Label {
            id: label
            text: qsTr("Title")
        }

        Label {
            id: label1
            text: qsTr("First Name")
        }

        Label {
            id: label2
            text: qsTr("Last Name")
        }

        ComboBox {
            id: title
            Layout.fillWidth: true
        }

        TextField {
            id: firstName
            text: qsTr("First Name")
            Layout.fillWidth: true
        }

        TextField {
            id: lastName
            text: qsTr("Last Name")
            Layout.fillWidth: true
        }

        Label {
            id: label3
            text: qsTr("Customer Id")
        }

        TextField {
            id: customerId
            text: qsTr("Customer Id")
            Layout.fillWidth: true
            Layout.columnSpan: 3
        }
    }

    RowLayout {
        id: rowLayout
        width: 100
        anchors.right: parent.right
        anchors.rightMargin: 12
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 12

        Button {
            id: save
            text: qsTr("Save")
            Layout.fillHeight: true
            Layout.fillWidth: true
        }

        Button {
            id: cancel
            text: qsTr("Cancel")
            Layout.fillHeight: true
            Layout.fillWidth: true
        }
    }
}
