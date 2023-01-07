#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

//throwing
bool doDivision(int max){
    int value;
    qInfo() << "Enter a number: ";
    cin >> value;

    if(value == 0) throw "Can not divide by Zero!";

    int result = max / value;
    qInfo() << "Result: " << result;

    return true;
}

// try / catch
bool doDivision2(int max){
    try {

        int value;
        qInfo() << "Enter a number: ";
        cin >> value;

        if(value == 0) throw "Can not divide by Zero!";

        if(value>5) throw 99;

        if(value == 1) throw std::runtime_error("Should be grater than 1 !!!");

        int result = max / value;
        qInfo() << "Result: " << result;

    }catch(std::exception const& e){
        qWarning() << "We caught the STD way: " << e.what();
    }
    catch(int e){
        qWarning() << "We caught a number!" << e;
        return false;
    }
    catch(char* e){
        qWarning() << "We caught a pointer to char*!" << e;
        return false;
    }
    catch(...){
        qWarning() << "Something bad happen!!!";
        return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max=44;
//    do {

//    }while(doDivision(max));

    do {

    }while(doDivision2(max));

    return a.exec();
}
