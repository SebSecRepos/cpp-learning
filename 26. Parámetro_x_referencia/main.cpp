/*

Las referencias, no son punteros exactamente, son ALIAS que le permiten al compilador
trabajar de fondo con punteros, pero en el código no se implementa el puntero en si.

La función debe recibir el tipo de dato de la siguiente forma
Por ejemplo si es int se utiliza int y ampersand,
El tipo de dato sigue siendo un int, NO recibe un puntero
ni una dirección de memoria.

void cambiarNumero(int& numero){
    numero=22;
}

Se modifica la varible original

*/


#include<iostream>
#include<string.h>
#include<typeinfo>

void cambiarValor( int&, int&);

using namespace std;

int main(int argc, char const *argv[])
{
    
    int num1=10, num2=5;

    cambiarValor(num1,num2);

    cout<<num1<<" / "<<num2<<endl;

    return 0;
}

void cambiarValor( int& val1, int& val2){

    val1=22;
    val2=500;
   
}