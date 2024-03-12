/*
 Si una función recibe una matríz, el segundo array debe tener una cantidad de lementos definidos
*/

#include<iostream>

using namespace std;

void showMatriz( int matriz[][5] );

int main(int argc, char const *argv[])
{
    int matriz[][5]={
        {1,2,3,4,5},
        {1,2,3,4,5},
    };
    showMatriz(matriz);
    return 0;
}

void showMatriz( int matriz[5][5] ){

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"Valor("<<i<<","<<j<<") "<<endl;
        }
    }
}