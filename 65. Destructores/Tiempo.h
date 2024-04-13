#include<iostream>
#ifndef TIEMPO_H
#define TIEMPO_H

using namespace std;

class Tiempo
{
private:
    int hours,minutes,seconds;
public:
    Tiempo(int _hours,int _minutes,int _seconds);
    Tiempo(long secondsTime);
    ~Tiempo();
    void showTime();
};

Tiempo::Tiempo(int _hours,int _minutes,int _seconds){
        hours=_hours;
        minutes=_minutes;
        seconds=_seconds;
}
Tiempo::Tiempo(long secondsTime){           //Sobrecarga
    hours=secondsTime/3600;
    secondsTime=secondsTime%3600;
    minutes=secondsTime/60;
    seconds=secondsTime%60;
}
Tiempo::~Tiempo(){          //El destructor se ejecuta solo al finalizar, pero se puede usar manualmente
    cout<<"Deleting date.."<<endl;
}

void Tiempo::showTime(){
    cout<<"Tiempo "<<hours<<":"<<minutes<<":"<<seconds<<endl;
}


#endif