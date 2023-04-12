#ifndef SINGLETONCLASS_H
#define SINGLETONCLASS_H

#include <QObject>
#include <QQmlEngine>
#include <QJSEngine>

class Singletonclass : public QObject
{
    Q_OBJECT
public:
    explicit Singletonclass(QObject *parent = nullptr);

    static QJSValue singletonProvider(QQmlEngine *engine,QJSEngine *scriptEngine);

signals:

};

#endif // SINGLETONCLASS_H
