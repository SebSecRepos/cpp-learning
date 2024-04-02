#include<iostream>
#include<string>

using namespace std;


typedef struct Empleado{

    char nombre[30];
    int edad;

}_Empleado;

_Empleado empleado, *empleadoPtr=&empleado;


void getData();

int main(int argc, char const *argv[])
{
    getData();

//mostrar datoss
    return 0;
}

void getData(){
    cout<<"Ingrese edad: "<<endl;
    cin>>empleadoPtr->edad;
    cout<<"Ingrese nombre: "<<endl;
    cin.ignore();
    cin.getline(empleadoPtr->nombre,sizeof(empleadoPtr->nombre));
}