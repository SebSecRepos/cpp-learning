#include<iostream>

/*
Para crear una estructura con alias, debemos utilizar typedef
    typedf struct Empleado{
        char nombre[50];
        int edad;
    } _Empleado;

    De esta forma evitamos el struct previo a la declaración de la variable

*/

using namespace std;

typedef struct Empleado{
    char nombre[50];
    char direccion[50];
    int edad;
} _Empleado;



int main()
{
    int cantidad=0;
    cout<<"Ingrese cant empleados"<<endl;
    cin>>cantidad;
    _Empleado empleados[cantidad];



    for (int i = 0; i < cantidad; i++)
    {
        _Empleado new_Empleado;
        
        cin.ignore();   //Evita el salto del primer cin.getline()

        cout<<"Empleado Nro "<<i+1<<endl;

        cout<<"Ingrese nombre"<<endl;
        cin.getline(new_Empleado.nombre, sizeof(new_Empleado.nombre));
        
        cout<<"Ingrese direccion"<<endl;
        cin.getline(new_Empleado.direccion, sizeof(new_Empleado.direccion));
        
        cout<<"Ingrese edad"<<endl;
        cin>>new_Empleado.edad;
        
        empleados[i] = new_Empleado;

        cout<<"\n\n"<<endl;
    }

    for (int j = 0; j < cantidad; j++)
    {
        cout<<"Empleado "<< j <<endl;
        cout<<"\tNombre "<< empleados[j].nombre<<endl;
        cout<<"\tDireccion "<< empleados[j].direccion<<endl;
        cout<<"\tEdad "<< empleados[j].edad<<endl;
    }
    
    return 0;
}
