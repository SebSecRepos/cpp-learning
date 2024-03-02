#include<iostream>
#include<string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int nums[5]={3,6,5,1,2},pos,aux;

    for (int i = 0; i < 5; i++)
    {
        pos=i;
        aux=nums[i];                                 //Guarda el valor a mover hacia atrás
        while ( (pos > 0) && (aux < nums[pos-1])   ) //si el nro actual es menor al anterior
        {
            nums[pos] = nums[ pos - 1 ];            //La pos actual es el valor de la pos anterior
            pos--;                                  //Nos movemos hacia atrás        
        }
        
        nums[pos] = aux;                           //En la posición anterior queda el valor del auxiliar
    }


    for (int i = 0; i < 5; i++)
    {
        cout<<nums[i]<<", ";
    }
    
    return 0;
}
