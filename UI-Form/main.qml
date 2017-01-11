import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Dialogs 1.2
import QtQuick.Layouts 1.1
import my.customermodel.singleton 1.0

ApplicationWindow {
    visible: true
    title: qsTr("Customer App")

    menuBar: MenuBar {
        Menu {
            title: qsTr("File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: console.log("Open action triggered");
            }
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }
        }
    }

    MainForm {
        anchors.fill: parent
        Layout.minimumWidth: 800
        Layout.minimumHeight: 480
        Layout.preferredWidth: 768
        Layout.preferredHeight: 480
        tableView1.model: CustomerModel
        Component.onCompleted: CustomerModel.selection = tableView1.selection
    }

    MessageDialog {
        id: messageDialog
        title: qsTr("May I have your attention, please?")

        function show(caption) {
            messageDialog.text = caption;
            messageDialog.open();
        }
    }
}
