import QtQuick 2.4
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.3

Item {
    id: content
    width: 400
    height: 400
    property alias cancel: cancel
    property alias save: save
    property alias comboBox: comboBox
    property alias textField2: textField2
    property alias textField1: textField1
    property alias textField: textField
    property alias rowLayout: rowLayout
    property alias gridLayout: gridLayout

    GridLayout {
        id: gridLayout
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
            id: comboBox
        }

        TextField {
            id: textField
            text: qsTr("First Name")
        }

        TextField {
            id: textField1
            text: qsTr("Last Name")
        }

        Label {
            id: label3
            text: qsTr("Customer Id")
        }

        TextField {
            id: textField2
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
