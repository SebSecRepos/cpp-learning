#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int matriz[100][100], filas, columnas;

    do
    {
        cout<<"Ingrese cantidad de filas: ";
        cin>>filas;
        cout<<"Ingrese cantidad de columnas: ";
        cin>>columnas;
    } while (filas>100 || filas<=0 || columnas>100 || columnas<=0 );
    

    for (int fil = 0; fil < filas; fil++)         //Por cada fila
    {
        for (int col = 0; col < columnas; col++) //Establecemos una columa
        {
            cout<<"Ingresa el valor de la  fila número: "<<fil+1<<" en la columa "<<col+1<<endl;
            cin>>matriz[fil][col];
        }
    }
    
    for (int i = 0; i < filas; i++)
    {
        cout<<"|";
        for (int j = 0; j < columnas; j++)
        {
            cout<<" "<<matriz[i][j]<<" |";
        }
        cout<<endl<<"-----------------------------"<<endl;
    }
    
    system("pause");
    return 0;
}
