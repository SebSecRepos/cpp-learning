/*
    En este ejercicio se soluciona el problema de persistencia en memoria a un 
    elemento creado en una función, ya que por defecto se borra al finalizar la función
*/

#include<iostream>
using namespace std;

int *numbers(int,int);  //La función retornará un array de dos elementos

int main()
{

    int num1=0,num2=0;

    int *result=numbers(200,23);

    cout<<"Suma "<<result[0]<<endl;
    cout<<"Multiplicación "<<result[1]<<endl;

    delete[] result;    //!! Importante, eliminamos la asignación dinámica de memoria 

    return 0;
}

int *numbers(int num1, int num2){

    int suma=num1+num2;
    int multiplicacion=num1*num2;

    int *result = new int[2];          //Asignación dinámica de memoria, es diferente int *result[2];  
    result[0]=suma;                    //Permite persistencia en memoria al finalizar la función
    result[1]=multiplicacion;

    return result;
}