#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>
#include <QDebug>
#include "person.h"

class Student : public Person
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

    void buyBook();

signals:

};

#endif // STUDENT_H
