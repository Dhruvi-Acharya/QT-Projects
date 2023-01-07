#include "feline.h"

feline::feline(QObject *parent)
    : QObject{parent}
{

}

void feline::meow()
{
    qInfo() << "Meow";
}

void feline::hiss()
{
    qInfo() << "Hiss";
}
