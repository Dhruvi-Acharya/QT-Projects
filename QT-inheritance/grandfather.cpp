#include "grandfather.h"

Grandfather::Grandfather(QObject *parent)
    : QObject{parent}
{
    qInfo() << this <<"Constructed";
}
