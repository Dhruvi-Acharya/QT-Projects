#ifndef CHILD1_H
#define CHILD1_H

#include <QObject>
#include "father.h"

class Child1 : public Father
{
    Q_OBJECT
public:
    explicit Child1(QObject *parent = nullptr);

signals:

};

#endif // CHILD1_H
