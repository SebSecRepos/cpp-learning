#include<iostream>
#include<string.h>

using namespace std;

typedef struct Cliente
{
    char nombre[65];
    int saldo=0;
}_Cliente;

int main(int argc, char const *argv[])
{

    int saldo=0,id=0;
    char opcion={};
    _Cliente clientes[3]={{"juan"}, {"maria"}, {"elmati"}};


    main:
    system("cls");
    cout<<"LISTA DE CLIENTES"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"id: "<<i<<" nombre: "<<clientes[i].nombre<<endl;
    }
    
    cout<<"Ingrese el id al que se le va a cargar saldo"<<endl;
    cin>>id;

    if (clientes[id].nombre[0] == '\0')
    {
        cout<<"Cliente invalido"<<endl;

        system("pause");
        system("cls");
        goto main;
    }else{
        system("cls");
        cout<<"Cliente: "<<clientes[id].nombre<<endl;
        cout<<"Elija una opcion"<<endl;
        cout<<"a) Cargar saldo"<<endl;
        cout<<"b) Quitar saldo"<<endl;
        cout<<"c) Salir"<<endl;

        cin.ignore();
        cout<<"id: "<<id<<endl;
        cin>>opcion;


        switch (opcion)
        {
        case 'a':
            cout<<"Cuanto saldo le agregara al cliente: "<<clientes[id].nombre<<endl;
            cin>>saldo;
            clientes[id].saldo+=saldo;
            cout<<"Saldo agregado correctamente, el saldo actual de "<<clientes[id].nombre<< "es: "<<clientes[id].saldo<<endl;
            system("pause");
            break;
        
        case 'b':
            cout<<"Cuanto saldo le quitara al cliente: "<<clientes[id].nombre<<endl;
            cin>>saldo;
            clientes[id].saldo-=saldo;
            cout<<"Saldo quitado correctamente, el saldo actual de "<<clientes[id].nombre<< "es: " <<clientes[id].saldo<<endl;
            system("pause");
            break;
        
        case 'c':
            return -1;
            break;
        
        default:
            break;
        }
        
        goto main;
        
    }
    

    return 0;
}
