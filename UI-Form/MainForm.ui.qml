import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1

Item {
    width: 640
    height: 480
    property alias tableView1: tableView1

    SplitView {
        id: splitView
        anchors.fill: parent

        TableView {
            id: tableView1
        }

        TabView {
            id: tabView
            width: 360
            height: 300

            Tab {
                id: settings
                title: "Customer Settings"
                source: "Settings.qml"
            }

            Tab {
                id: notes
                x: -3
                y: -9
                title: "Customer Notes"
                source: "Notes.qml"
            }

            Tab {
                id: history
                x: -7
                y: -8
                title: "Customer History"
                source: "History.qml"
            }
        }
    }
}
