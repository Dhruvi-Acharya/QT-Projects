#include "calc.h"

Calc::Calc(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Calc Constructed";
}

Calc::~Calc()
{
    qInfo() << this << "Calc Destructed";
}

int Calc::dogFun(int age)
{
    return age * 10;
}

int Calc::catFun(int age)
{
    return age * 20;
}
