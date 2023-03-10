#ifndef RADIO_H
#define RADIO_H

#include <QObject>
#include <QDebug>

class Radio : public QObject
{
    Q_OBJECT
public:
    explicit Radio(QObject *parent = nullptr);

signals:
    void quit();

public slots:
//    void send(int channel, QString name, QString message);
    void listen(int channel,QString name, QString message);
};

#endif // RADIO_H
