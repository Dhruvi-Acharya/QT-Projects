#include "child2.h"

Child2::Child2(QObject *parent)
    : Father{parent}
{
    qInfo() << this << "constructed";
}
