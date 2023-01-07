#ifndef CHILD2_H
#define CHILD2_H

#include <QObject>
#include "father.h"
#include <QDebug>

class Child2 : public Father
{
    Q_OBJECT
public:
    explicit Child2(QObject *parent = nullptr);

signals:

};

#endif // CHILD2_H
