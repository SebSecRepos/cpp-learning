//Ordenamiento burbuja

#include<iostream>
#include<string.h>

using namespace std;

typedef struct Empleado{
    char nombre[50];
    int salario;
} _Empleado;

int main(int argc, char const *argv[])
{

    bool swapped;

    _Empleado empleados[4]={{"juan",1500},{"pepe",2000},{"maria",3000},{"nemo",500}};

    do
    {
        swapped=false;

        for (int i = 0; i < 3; i++)
        {
            if (empleados[i].salario > empleados[i+1].salario)
            {
                _Empleado aux=empleados[i];
                empleados[i]=empleados[i+1];
                empleados[i+1]=aux;

                swapped=true;
            }
        }
        
        
    } while (swapped);
    

    for (int i = 0; i < 4; i++)
    {
        cout<<empleados[i].salario<<", ";
    }
    
    return 0;
}
