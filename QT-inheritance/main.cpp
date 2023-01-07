#include <QCoreApplication>
//#include "father.h"
#include "child1.h"
#include "grandfather.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Child1 g;
    Grandfather gf;


    return a.exec();
}
