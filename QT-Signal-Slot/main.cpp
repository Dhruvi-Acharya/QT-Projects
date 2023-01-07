#include <QCoreApplication>
#include <QDebug>
#include "source.h"
#include "destination.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Source objSrc;
    Destination objDest;

    QObject::connect(&objSrc,&Source::mySignal,&objDest,&Destination::onMessage);

    objSrc.test();

    return a.exec();
}
