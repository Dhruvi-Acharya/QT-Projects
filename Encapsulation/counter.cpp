#include "counter.h"
#include <QDebug>

Counter::Counter(QObject *parent)
    : QObject{parent}
{

}

void Counter::count(int max)
{
    mcount = 0;
    mmax = max;
    performcount();
}

void Counter::performcount()
{
    for(int i = 0; i< mmax; i++)
    {
        mcount++;
        qInfo() << "Count: " << mcount;
    }
}
