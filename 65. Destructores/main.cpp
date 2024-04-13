#include<iostream>
#include<string.h>
#include"Tiempo.h"

using namespace std;


int main(int argc, char const *argv[])
{
    Tiempo newTime1 = Tiempo(04,20,00);
    Tiempo newTime2 = Tiempo(15600);


    newTime1.showTime();
    newTime2.showTime();

    return 0;
}
