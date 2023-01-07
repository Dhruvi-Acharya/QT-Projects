#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int getNumber(){
    int number;
    qInfo() <<"Enter a number: ";
    cin >> number;
    return number;
}

void message(QString value){
    qInfo( ) << value;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int no = getNumber();
    for(int i= 0; i<no;i++){
        message("Hello World");
    }

    return a.exec();
}
