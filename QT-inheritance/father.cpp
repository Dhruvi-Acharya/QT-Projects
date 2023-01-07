#include "father.h"

Father::Father(QObject *parent)
    : Grandfather{parent}
{
    qInfo() << this << "Constructed";
}
