#include <QCoreApplication>
#include <QDebug>
#include "teacher.h"
#include "student.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Student s;
    s.buyBook();

    Teacher t;
    t.teach();

    t.name = "Mr. Smith";

    t.sayHello();
    s.sayHello();

    return a.exec();
}
