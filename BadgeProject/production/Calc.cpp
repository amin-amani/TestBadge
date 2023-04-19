#include "Calc.h"

Calc::Calc(QObject *parent) : QObject(parent)
{
    //error
    t=1
    qDebug()<<"constructor!!!!!!!!!!!!!!!!";
}

int Calc::Add(int a, int b)
{
    return a+b;
}
