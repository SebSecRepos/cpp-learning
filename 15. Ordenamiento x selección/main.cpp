#include<iostream>
#include<string.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int nums[5]={2,4,1,5,3}, min=0, aux=0;


    for (int i = 0; i < 5; i++)
    {
        min=i;                            //min es la posición actual

        for (int j = i+1; j < 5; j++)    //j es la posición siguiente 
        {
            if ( nums[min] > nums[j] )  //Si el actual es mayor al siguiente 
            {
                min=j;                  //El indice del menor será el de la siguiente posición 
            }
        }
        aux=nums[i];                   //Aux es el valor de la pos actual
        nums[i]=nums[min];            //El valor de la pos actual será el valor de la pos siguiente que es menor
        nums[min]=aux;                //El valor de la pos siguiente será el del auxiliar que es que era el actual que es mayor
    }


    for (int i = 0; i < 5; i++)
    {
        cout<<nums[i]<<", ";
    }
    
    return 0;
}
