#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;


int **matriz, rows, columns;

void getData();
void freeData();

int main(int argc, char const *argv[])
{
    getData();
    freeData();
    return 0;
}

void getData(){

    cout<<"Ingrese filas"<<endl;
    cin>>rows;
    cout<<"Ingrese columnas"<<endl;
    cin>>columns;
    matriz=new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matriz[i]=new int[columns];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"Valor en ("<<i+1<<","<<j+1<<")"<<endl;
            cin>>*(*(matriz+i)+j);
        }
    }
    cout<<"Matriz"<<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"Valor en ("<<i+1<<","<<j+1<<") = "<< *(*(matriz+i)+j) <<endl;
        }
    }
        
}

void freeData(){

    for (int i = 0; i < rows; i++)
    {
      delete [] matriz[i];
    }
    
    delete [] matriz;
}