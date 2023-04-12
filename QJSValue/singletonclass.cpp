#include "singletonclass.h"

Singletonclass::Singletonclass(QObject *parent)
    : QObject{parent}
{

}

QJSValue Singletonclass::singletonProvider(QQmlEngine *engine, QJSEngine *scriptEngine)
{
    int mValue = 5;
    QJSValue jsvalue = engine->newObject();
    jsvalue.setProperty("someProperty",mValue);

    QJSValue newArray = engine->newArray(3);

    for(int i=1;i<=3;++i){
        newArray.setProperty(i,i*5);
    }

    jsvalue.setProperty("mArray",newArray);

    return jsvalue;
}
