/*
    Las plantillas permiten que a una función se le pase como tipo de dato un dato
    definido por el programador que permite diferentes tipos de datos
*/

#include<iostream>
using namespace std;
template <class Tipo>          //El tipo de dato

void numero(Tipo elnumero);    //la función recibe como tipo de dato la plantilla

int main(int argc, char const *argv[])
{
    int num1=10;
    float num2=12.5;
    double num3=12.567;

    numero(num1);
    numero(num2);
    numero(num3);

    return 0;
}


template <class Tipo>
void numero(Tipo elnumero){
    cout<<elnumero<<endl;
}

