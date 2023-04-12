#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include "counter.h"

void userInput()
{
    qInfo() << "Enter a number: ";
    QTextStream stream(stdin);

    QString data = stream.readLine();

    bool ok;
    int max = data.toInt(&ok);

    if(!ok){
        qInfo() << "Not a number";
        userInput();
        return;
    }

    Counter counter;
    counter.count(max);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    userInput();

    return a.exec();
}
