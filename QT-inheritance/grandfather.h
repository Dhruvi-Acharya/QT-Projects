#ifndef GRANDFATHER_H
#define GRANDFATHER_H

#include <QObject>
#include <QDebug>

class Grandfather : public QObject
{
    Q_OBJECT
public:
    explicit Grandfather(QObject *parent = nullptr);

signals:

};

#endif // GRANDFATHER_H
