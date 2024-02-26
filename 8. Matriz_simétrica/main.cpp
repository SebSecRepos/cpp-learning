
/*
    Lógica ej

  1 | 2 | 3
-------------
  2 | 3 | 4
-------------
  3 | 4 | 5

*/


#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int filMatrizA,colMatrizA,filMatrizB,colMatrizB;


INPUT:
    cout<<"Ingrese filas y luego columas de matriz A: "; cin>>filMatrizA>>colMatrizA;
    cout<<"Ingrese filas y luego columas de matriz B: "; cin>>filMatrizB>>colMatrizB;


    if (filMatrizA == colMatrizA && filMatrizB == colMatrizB && filMatrizA == filMatrizB )
    {

        int matrizA[filMatrizA][colMatrizA],matrizB[filMatrizB][colMatrizB];

        cout<<" Ingresando datos en Matriz A:"<<endl;
        for (int i = 0; i < filMatrizA; i++)
        {
            for (int j = 0; j < colMatrizA; j++)
            {
                cout<<"Ingrese valor en: ("<<i<<","<<j<<")"<<endl;
                cin>>matrizA[i][j];
            }
        }

        cout<<"[+] Ingresando datos en Matriz B:"<<endl;
        for (int i = 0; i < filMatrizB; i++)
        {
            for (int j = 0; j < colMatrizB; j++)
            {
                cout<<"Ingrese valor en: ("<<i<<","<<j<<")"<<endl;
                cin>>matrizB[i][j];
            }
        }
        
        
        cout<<"Comparando"<<endl;
        for (int i = 0; i < filMatrizB; i++)
        {
            for (int j = 0; j < colMatrizB; j++)
            {
                if( matrizA[i][j] != matrizB[i][j] ){
                    cout<<"Matrices no simetricas"<<endl;
                    system("pause");
                    system("cls");
                    return 1;
                }
            }
        }
        
    }else{
        cout<<"Erro al ingresar una matriz cuadrada\n";
        goto INPUT;
    }
    cout<<"[+] Matrices simetricas!!";
    system("pause");

    return 0;
}
