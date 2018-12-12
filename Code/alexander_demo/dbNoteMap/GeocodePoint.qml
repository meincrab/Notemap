import QtQuick.Controls 2.4
import QtQuick.Layouts 1.1
import QtQuick.Dialogs 1.2
import QtQuick.Controls.Styles 1.2
import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.3

import QtLocation 5.9
import QtPositioning 5.11

Item {

        id: pointDelegate



        MapCircle {
            id: point
            radius: 250
            color: "#46a2da"
            border.color: "#190a33"
            border.width: 2
            smooth: true
            opacity: 0.25
            center: map.center
        }
    }

