#include<iostream>
#include<string.h>
#include "fecha.h"

using namespace std;


int main(int argc, char const *argv[])
{
    Fecha newDate1 = Fecha(13,04,2024);
    Fecha newDate2 = Fecha(20240413);

    newDate1.showDate();
    newDate2.showDate();
    return 0;
}

