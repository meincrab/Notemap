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



Page {
id: map_page
visible: false
anchors.fill: parent

Rectangle {
    id: map_rectangle
    color: "#2e2d2d"
    anchors.fill: parent


    PositionSource {
        id: src
        updateInterval: 1000
        active: true

        onPositionChanged: {
            var coord = src.position.coordinate;
            console.log("Coordinate:", coord.longitude, coord.latitude);
            map.center = coord;
            me.coordinate = coord
            /*var jamkPlace = GeocodeModel.query = "Piippukatu 2, 40100 Jyväskylä, Finland"*/
        }
    }

   Plugin {
        id: osmPlugin
        allowExperimental: true
        preferred: ["osm"]
    }


   Map {
       id: map
       anchors.fill: parent
       plugin: osmPlugin
       zoomLevel: 15

      MapQuickItem {
             id: me
             coordinate:  PositionSource.position.coordinate
             anchorPoint.x: image.width/2
             anchorPoint.y: image.height
             sourceItem: Image {
                 width: 50; height: 50
                 id: imageMe
                 source: "images/meMark.png"
             }
         }
       MapQuickItem {
            id: place1
            anchorPoint.x: image.width/2
            anchorPoint.y: image.height
            sourceItem: Image {
                width: 75; height: 75
                id: image1
                source: "images/marker.png"

            }
        }
       MapQuickItem {
            id: place2
            anchorPoint.x: image.width/2
            anchorPoint.y: image.height
            sourceItem: Image {
                width: 75; height: 75
                id: image2
                source: "images/marker2.png"

            }
        }

       MapQuickItem {
            id: place3
            anchorPoint.x: image.width/2
            anchorPoint.y: image.height
            sourceItem: Image {
                width: 75; height: 75
                id: image3
                source: "images/marker.png"

            }
        }

       MapQuickItem {
            id: place4
            anchorPoint.x: image.width/2
            anchorPoint.y: image.height
            sourceItem: Image {
                width: 75; height: 75
                id: image4
                source: "images/marker2.png"

            }
        }
       MapQuickItem {
            id: place5
            anchorPoint.x: image.width/2
            anchorPoint.y: image.height
            sourceItem: Image {
                width: 75; height: 75
                id: image5
                source: "images/marker2.png"

            }
        }



      GeocodeModel {
           plugin: map.plugin
           query: " Piippukatu 2, Jyväskylä"
           onLocationsChanged:
            {
                if (count) {
                    place1.coordinate = get(0).coordinate
                    console.log("Coordinate jamk :",  place1.coordinate);
                }
            }
           Component.onCompleted: update()
       }
      GeocodeModel {
           plugin: map.plugin
           query: "Rajakatu 35, Jyväskylä"
           onLocationsChanged:
            {
                if (count) {
                    place2.coordinate = get(0).coordinate
                    console.log("Coordinate jamk :",  place2.coordinate);
                }
            }
           Component.onCompleted: update()
       }
      GeocodeModel {
           plugin: map.plugin
           query: "Ihantolantie 5, Jyväskylä"
           onLocationsChanged:
            {
                if (count) {
                    place3.coordinate = get(0).coordinate
                    console.log("Coordinate jamk :",  place3.coordinate);
                }
            }
           Component.onCompleted: update()
       }
      GeocodeModel {
           plugin: map.plugin
           query: " Ahjokatu 7, Jyväskylä"
           onLocationsChanged:
            {
                if (count) {
                    place4.coordinate = get(0).coordinate
                    console.log("Coordinate jamk :",  place4.coordinate);
                }
           }
           Component.onCompleted: update()
      }
      GeocodeModel {
           plugin: map.plugin
           query: " Kaivokatu 1, Helsinki"
           onLocationsChanged:
            {
                if (count) {
                    place5.coordinate = get(0).coordinate
                    console.log("Coordinate jamk :",  place5.coordinate);
                }
           }
           Component.onCompleted: update()
      }

   }

}
}
