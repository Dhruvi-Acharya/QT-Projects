#include "student.h"

Student::Student(QObject *parent)
    : Person{parent}
{

}

void Student::buyBook()
{
    qInfo() << "Buying books!";
//    Person::display("");
}
