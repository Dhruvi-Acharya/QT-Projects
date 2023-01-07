#ifndef FATHER_H
#define FATHER_H

#include <QObject>
#include "grandfather.h"
#include <QDebug>

class Father : public Grandfather
{
    Q_OBJECT
public:
    explicit Father(QObject *parent = nullptr);

signals:

};

#endif // FATHER_H
