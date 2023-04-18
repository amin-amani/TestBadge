#ifndef CALC_H
#define CALC_H

#include <QObject>
#include <QDebug>

class Calc : public QObject
{
    Q_OBJECT
public:
    explicit Calc(QObject *parent = nullptr);
    int Add(int a,int b);

signals:

};

#endif // CALC_H
