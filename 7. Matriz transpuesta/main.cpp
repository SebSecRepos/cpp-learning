#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int matrizA[100][100],matrizB[100][100],filas,columnas;

    cout<<"Ingrese filas "<<endl;
    cin>>filas;

    cout<<"Ingrese columnas "<<endl;
    cin>>columnas;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Ingrese el valor de ("<<i+1<<","<<j+1<<")"<<endl;
            cin>>matrizA[i][j];
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)  //valor en la siguiente fila, en la columna del valor de la fila
        {
            matrizB[i][j]=matrizA[j][i];
        }
    }


    cout<<" Matriz A:"<<endl;
    for (int i = 0; i < filas; i++)
    {
        cout<<"|";
        for (int j = 0; j < columnas; j++)
        {
            cout<<" "<<matrizA[i][j]<<" |";
        }
        cout<<endl<<"-----------------------------"<<endl;
    }
        

    cout<<" Matriz B:"<<endl;
    for (int i = 0; i < filas; i++)
    {
        cout<<"|";
        for (int j = 0; j < columnas; j++)
        {
            cout<<" "<<matrizB[i][j]<<" |";
        }
        cout<<endl<<"-----------------------------"<<endl;
    }
        

    system("pause");
    return 0;
}
