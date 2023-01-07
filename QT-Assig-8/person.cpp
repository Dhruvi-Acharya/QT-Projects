#include "person.h"

Person::Person(QObject *parent)
    : QObject{parent}
{

}

void Person::sayHello()
{
    QString message = "Hello";
    if(!name.isEmpty()) message.append(" my name is "+name);
    qInfo() << message;
}
