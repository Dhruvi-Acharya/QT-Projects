#include <QCoreApplication>
#include <QDebug>
#include "applicance.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    applicance kit;

    qInfo() << "applicance can cook " << kit.cook();
    qInfo() << "applicance can bake " << kit.freeze();
    qInfo() << "applicance can grill " << kit.grill();

    return a.exec();
}
