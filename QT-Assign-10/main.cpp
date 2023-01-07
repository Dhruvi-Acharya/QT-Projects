#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "calc.h"

using namespace std;

int calDog(int age, Calc *obj){
    return obj->dogFun(age);
}

int calCat(int age, Calc *obj){
    return obj->catFun(age);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Enter your age: ";
    cin >> age;

    Calc *obj = new Calc(nullptr);

    qInfo() << "Age of cat is: " << calCat(age,obj);
    qInfo() << "Age of Dog is: " << calDog(age,obj);

    delete obj;

    return a.exec();
}
