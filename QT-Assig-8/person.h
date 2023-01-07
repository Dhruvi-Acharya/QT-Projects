#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QDebug>

class Person : public QObject
{
    Q_OBJECT
public:
    explicit Person(QObject *parent = nullptr);

//    void display(QString name);
    QString name;
    void sayHello();

signals:

};

#endif // PERSON_H
