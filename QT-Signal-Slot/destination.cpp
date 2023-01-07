#include "destination.h"

Destination::Destination(QObject *parent)
    : QObject{parent}
{

}

void Destination::onMessage(QString message)
{
    qInfo() << "onMessage: " << message;
}
