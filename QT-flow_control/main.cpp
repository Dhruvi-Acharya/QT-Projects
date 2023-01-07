#include <QCoreApplication>
#include<QDebug>
#include<iostream>

using namespace std;

void fun1(){
    qInfo() << "Hello from function";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age; // default value is 0
    qInfo() << "Enter your Age: ";
    cin>>age;
    age=45;
    qInfo() <<"Your age is: "<<age;
//    cout<<"Your age is: "<<age; // This is not working not printing message

    if (age == 0) qFatal("You did not enter a valid int!"); // fatal exception exit program

    qInfo() <<"You entered: "<<age;

    if(age < 18){
        qInfo() << "You are under age!";
    } else if(age < 60){
        qInfo() <<"You are an adult";
    }else {
        qInfo() << "You are old";
    }

    age > 0 && age < 110 ? qInfo("You entered valid age") : qFatal("You didn't enter a valid age"); //ternary

    qInfo() <<"Finished!!!";

    fun1();


    // switch
    switch (age) {
    case 0:
        qInfo("you didn't enter valid age");
        break;
    case 18:
        qInfo("You can Vote");
        break;
    case 67:
        qInfo("You can retire");
        break;
    default:
        qInfo("Nothing special this year");
        break;
    }

    return a.exec();
}
