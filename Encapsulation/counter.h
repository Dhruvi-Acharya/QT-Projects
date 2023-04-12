#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
public:
    explicit Counter(QObject *parent = nullptr);

    void count(int max);

private:
    int mcount;
    int mmax;
    void performcount();

signals:

};

#endif // COUNTER_H
