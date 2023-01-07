#include <QCoreApplication>
#include <QDebug>
#include "lion.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    lion simba;
    simba.speak();

    feline f;
    f.speak();

    return a.exec();
}
