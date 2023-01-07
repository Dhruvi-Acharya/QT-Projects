#include "child1.h"

Child1::Child1(QObject *parent)
    : Father{parent}
{
    qInfo() << this << "constructed";
}
