#include <QCoreApplication>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat,dog;

    cat.speak("meow");
    dog.speak("bark");

    Animal my(&a,"My laptop");
    Animal your(&a,"your laptop");

    my.weight = 10;
    your.weight = 10.10;

    my.test();
    your.test();

    return a.exec();
}
