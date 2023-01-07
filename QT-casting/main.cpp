#include <QCoreApplication>
#include<QDebug>
#include "feline.h"
#include "car.h"
#include "racecar.h"
#include "dog.h"

// dynamic cast
//can be used only with pointers and references to objects.
// its purpose is to ensure that the result of the type conversion is a valid complete object of the requested class.

void testDrive(car* obj){
    obj->drive();
    obj->stop();
}

void race(racecar* obj){
    obj->gofast();
}

// static cast
// The static_cast operator performs a nonpolymorphic cast.
// for example, it can be used to cast a base class pointer into a derived class pointer.

//QObject cast does not use the C++ RTTI, only used on QObjects.

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double value = 43.08;
    qInfo() << "Double: "<<value;

    int age = value; // implicit conversion
    qInfo() << "Age: "<<age;

    age = (int) value; //casting
    qInfo() << "Age: "<< age; //explicit conversion

    racecar* player1 = new racecar(&a);
    testDrive(player1); // converted automatically implicit cast

    // the correct way to cast
    car* obj = dynamic_cast<car*>(player1);
    if(obj) testDrive(obj);

    // up casting - going from the racecar
    // we can go from the base back to the derived because the classes we created are polymorphic
    // Static cast work fine - this is the way to go from a base to a derived class
    racecar* speedster = static_cast<racecar*>(obj);
    if(speedster) race(speedster);

    int* pointer = reinterpret_cast<int*>(speedster);
    qInfo() << "Pointer = " << pointer;

    racecar* mycar = reinterpret_cast<racecar*>(pointer);
    qInfo() << "My cars color is: "<<mycar->color;

    //QObject cast derived to base
    racecar* p1 = new racecar(&a);
//    car* mycar = qobject_cast<car*>(p1);
//    mycar->drive();


    //QObject cast base to derived
    racecar* fastcar = qobject_cast<racecar*>(mycar);
    fastcar->gofast();

    // will not use non-qt objects!!!
//    dog* fido = qobject_cast<dog*>(fastcar);
//    Q_UNUSED(fido);

    return a.exec();
}
