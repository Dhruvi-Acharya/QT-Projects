#ifndef AGE_H
#define AGE_H

#include <QObject>
#include <QDebug>

class Age : public QObject
{
    Q_OBJECT
public:
    explicit Age(QObject *parent = nullptr);

    static int age;

    void calculate(int age);

signals:

};

#endif // AGE_H
