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

    GeocodeModel {
        id: geocodeModel
         plugin: map.plugin
         query: fromAddress
         onStatusChanged: {
                 if ((status == GeocodeModel.Ready) || (status == GeocodeModel.Error))
                     map.geocodeFinished()
             }
         onLocationsChanged:
          {
              geocodeModel.query = fromAddress;
              geocodeModel.update();
              console.log("Coordinate jamk :",   map.center.latitude + " " +  map.center.longitude);
              /*if (count) {
                  //place1.coordinate = get(0).coordinate
                  map.center.latitude = get(0).coordinate.latitude
                  map.center.longitude = get(0).coordinate.longitude
                  console.log("Coordinate jamk :",   map.center.latitude + " " +  map.center.longitude);
              }*/
         }
         Component.onCompleted: update()
         autoUpdate: true
    }

 }
