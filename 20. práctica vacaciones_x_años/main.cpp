#include<iostream>
#include<string.h>
#include<ctime>

typedef struct Empleado{
    char nombre[50];
    int ingreso;
    int aniosTrabajados;
    int diasVacaciones;
}_Empleado;

using namespace std;

int main(int argc, char const *argv[])
{
    _Empleado empleados[3];
    time_t t=time(NULL);
    tm* timerPtr=localtime(&t);
    int currentYear=timerPtr->tm_year+1900;


    for (int i = 0; i < 3; i++)
    {
        cout<<"Empleado Nro: "<<i+1<<endl;
        _Empleado newEmpleado;

        cout<<"Ingrese nombre: "<<endl;
        cin.getline(newEmpleado.nombre, sizeof(newEmpleado.nombre));
        cout<<"Ingrese anio de ingreso : "<<endl;
        cin>>newEmpleado.ingreso;
        newEmpleado.aniosTrabajados=currentYear-newEmpleado.ingreso;

        switch (newEmpleado.aniosTrabajados)
        {
        case 0 ... 3:
            newEmpleado.diasVacaciones=5;
            break;
        
        case 4 ... 10:
            newEmpleado.diasVacaciones=10;
            break;
        
        case 11 ... 100:
            newEmpleado.diasVacaciones=15;
            break;
        
        default:
            break;
        }

        empleados[i]=newEmpleado;

        cout<<"\n\n";
        cin.ignore();
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<"Empleado Nro: "<<i+1<<endl;
        cout<<"Anios trabajados "<< empleados[i].aniosTrabajados <<endl;
        cout<<"Dias de vacaciones "<< empleados[i].diasVacaciones <<endl;
        cout<<"\n\n";
    }
    
    

    return 0;
}
