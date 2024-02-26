#include<iostream>

const int min_length=5;
const int max_length=10;


int arr1[min_length];
int arr2[min_length];
int arr3[max_length];


using namespace std;
int main()
{

    for (int i = 0; i < min_length; i++)
    {
        cout<< "Ingresa en el arreglo 1: "<<i+1<<endl;
        cin>>arr1[i];
    }

    for (int i = 0; i < min_length; i++)
    {
        cout<< "Ingresa en el arreglo 2: "<<i+1<<endl;
        cin>>arr1[i];
    }
    
    //Lógica: 
    for (int i = 0; i < max_length; i++)
    {
        //Hasta aquí se útiliza el mismo índice 
        if(i < min_length) arr3[i]=arr1[i];

        //Pero cuando toma el segundo array, hay que restarle min_length para equiparar el valor al inicio del 2° Arreglo
        if(i >= min_length) arr3[i]=arr1[i-5];
            
    }

    for (int i = 0; i < max_length; i++)
    {
        cout<<"Valor de"<<i+1<<":"<<arr3[i];
    }

    return 0;
}
