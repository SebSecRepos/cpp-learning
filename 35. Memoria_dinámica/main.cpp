#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

void getData(int *n, int **cals);

int main(int argc, char const *argv[])
{
    int cantc=0, *calificaciones;
    getData(&cantc, &calificaciones);


    cout<<"Mostrando calificaciones"<<endl;

    for (int i = 0; i < cantc; i++)
    {
        cout<<"Calificacion Nro: "<<i+1<<" = "<<calificaciones[i]<<endl;
    }
    
    delete[] calificaciones;
    return 0;
}

void getData(int *n, int **cals){


    cout<<"Ingrese cantidad de calificaciones"<<endl;
    cin>>*n;

    *cals=new int[*n];          //Como se asigna un array, se utiliza un solo asterisco, si fuera un número serían dos **cals=5;

    for (int i = 0; i < *n; i++)
    {   
        cout<<"Ingrese calificacion Nro: "<<i+1<<endl;
        cin>>(*cals)[i];       //Dereferenciación de puntero
    }
    
}