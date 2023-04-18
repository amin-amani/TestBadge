#include <QCoreApplication>
#include "Calc.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Calc c1;
    qDebug()<<c1.Add(1,2);

    return a.exec();
}
