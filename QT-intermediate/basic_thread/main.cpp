#include <QCoreApplication>
#include <QDateTime>
#include <QDebug>
#include <QThread>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Main Thread: " << a.thread();
    qInfo() << "Current Thread: " << QThread::currentThread();

    qInfo() << "Running: " << QThread::currentThread()->isRunning();
    qInfo() << "Finished: " << QThread::currentThread()->isFinished();
    qInfo() << "Loop Level: " << QThread::currentThread()->loopLevel();
    qInfo() << "Stack size: " << QThread::currentThread()->stackSize();

    qInfo() << "Before time: " << QDateTime::currentDateTime();

    QThread::currentThread()->sleep(5);

    qInfo() << "After time: " << QDateTime::currentDateTime();

    return a.exec();
}
