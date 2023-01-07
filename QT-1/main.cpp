#include <QCoreApplication>
#include<QDebug>
#include<array>
#include<iostream>
using namespace std;

/*
 * Main entry point
 */

struct student{
    int no;
    float marks;
};

/**
 * @brief main
 * @param argc no. of arguments
 * @param argv argemunts
 * @return int value
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // printing hello on screen
    qInfo() <<" hello ";

    int value=10;

    qInfo() << "value is: " << value;

    value=20.20; // warning

    enum colors {red, green, blue};
    colors color = red;
    qInfo() << color;

    student s;

    s.no=1;
    s.marks=20;

    qInfo() << "Number:" << s.no;
    qInfo() << "Marks:" << s.marks;

    // Array
    int array1[4]={10,20,30,40};

   // qInfo() << "Size:"<<array1.size();
    qInfo() << "Size of: " << sizeof(array1);

    array<int,4> arr;

    qInfo() << "Size:"<<arr.size();
    qInfo() << "Size of: " << sizeof(arr);

    cout<<"Hello from cout"<<endl;

    int age;

    cout<<"Please enter an age: ";
    cin>>age;
    qInfo() << age;

    qInfo() << "Information";
    qDebug() << "Debug";
    qCritical() << "Critical";
//    qFatal("Test CRASH !!!!!!");

    cerr<<"Error Log";

    return a.exec();
}
