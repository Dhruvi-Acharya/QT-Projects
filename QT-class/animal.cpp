#include "animal.h"

Animal::Animal(QObject *parent, QString name)
    : QObject{parent}
{
    //when created
    this->name=name;
    qInfo() << this << name << " constructed";
}

void Animal::speak(QString message)
{
    qDebug() << message;
}

Animal::~Animal()
{
    // when destroyed
    qInfo() << this << name << " deconstructed";
}

double Animal::askKG()
{
    return this->weight*10.2;
}

void Animal::test()
{
    qInfo()<< this << name << askKG();
}
