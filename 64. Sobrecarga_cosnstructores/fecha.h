#include<iostream>
#ifndef FECHA_H
#define FECHA_H

using namespace std;

class Fecha{
    private:
        int day,month,year;

    public:
        Fecha(int _day,int _month,int _year);
        Fecha(long _date);
        void showDate();
};

Fecha::Fecha(int _day,int _month,int _year){
    day=_day;
    month=_month;
    year=_year; 
}
Fecha::Fecha(long _date){ //20241304
    year=(_date/10000);
    month=((_date-year*10000)/100);
    day=(_date-year*10000-month*100);
}

void Fecha::showDate(){
    cout<<"La fecha es "<<day<<"/"<<month<<"/"<<year<<endl;
}

#endif 