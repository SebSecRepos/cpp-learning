/*
    El nombre de un array puede ser utilizado como puntero, al primer elemento del array

    Si una función recibe un puntero a int, y se le pasa un array de enteros, el resultado
    es el mismo
*/

#include<iostream>
#include<string.h>


using namespace std;

int *calcReturn(int uno,int dos, int *arr);

int main()
{
    int suma=0,multiplicacion=0;
    
    int resultado[2];
    
    calcReturn(200,23, resultado);  //Le pasamos el array como si fuera un puntero
    cout<<"hola"<<endl;

    suma=resultado[0];
    multiplicacion=resultado[1];

    cout<<"suma "<<suma<<endl;
    cout<<"Multiplicacion "<<multiplicacion<<endl;

    return 0;
}


int *calcReturn(int uno,int dos, int *arr){

    int sum=uno+dos;
    int mult=uno*dos;

    arr[0]=sum;
    arr[1]=mult;

}