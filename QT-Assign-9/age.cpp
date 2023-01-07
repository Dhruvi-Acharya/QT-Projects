#include "age.h"

Age::Age(QObject *parent)
    : QObject{parent}
{

}

void Age::calculate(int age){
    age = age+10;

    qInfo() << "In ten years you will be: " << this->age;
}
