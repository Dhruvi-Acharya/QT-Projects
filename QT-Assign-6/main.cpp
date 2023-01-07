#include <QCoreApplication>
#include<QDebug>
#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int maximum;
    cout<<"Enter a Maximum:";
    cin >> maximum;

    if(maximum == 0) qFatal("You did not enter a valid number!");

    for(int i=1;i<=maximum;i++){
        qInfo() << i << "Hello";
    }

    return a.exec();
}
