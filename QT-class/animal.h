#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class Animal : public QObject
{
    Q_OBJECT
public:
    //constructor
    explicit Animal(QObject *parent = nullptr, QString name = "");

    void speak(QString message);

    //Destructor
    ~Animal();

    int weight;
    QString name;

    double askKG();
    void test();

signals:

};

#endif // ANIMAL_H
