#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int calculate(int age)
{
    return age+10;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;

    qInfo() << "Enter your age in years: ";
    cin >> age;

    int value = calculate(age);

    qInfo() << "In ten years you will be: " << value;

    return a.exec();
}
