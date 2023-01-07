#include "lion.h"

lion::lion(QObject *parent)
    : feline{parent}
{

}

void lion::speak(){
    qInfo() << "Roar";

    //call the function of base class
    feline::speak();
}
