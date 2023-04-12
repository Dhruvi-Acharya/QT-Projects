import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.3
import com.blikon.singletone 1.0
//import com.blikon.singletoneqml 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

//    Component.onCompleted: {
//        console.log(qmlSingleton.name);
//    }

    Button {
        id: btn;
        text: "Click Me"
        onClicked: {
            //            console.log(MyApi.val);
            console.log(MyApi.someProperty);
            console.log(MyApi.mArray[2]);

            MyApi.mArray.forEach(function(element){
                console.log(element);
            }
            )
        }
    }
}
