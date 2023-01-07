#include <QCoreApplication>
#include<QDebug>
#include <QTextStream>
#include <iostream>
#include "radio.h"
#include "station.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Radio boombox;
    Station *channels[3];

    channels[0] = new Station(&boombox,94,"Rock and roll");
    channels[1] = new Station(&boombox,101,"Hip hop");
    channels[2] = new Station(&boombox,85,"News");

    boombox.connect(&boombox,&Radio::quit,&a,&QCoreApplication::quit,Qt::QueuedConnection);

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)

    return a.exec();
}
