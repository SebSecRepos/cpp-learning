/*
    Podemos utilizar punteros para recorrer el array
    Ya que sus elementos son contiguos en la memoria
*/

#include<iostream>
#include<string>

using namespace std;


int main(int argc, char const *argv[])
{

    int nums[]={4,6,2,-4,-10,1}, min, *dir_nums;

    dir_nums=nums;        //Apunta a la memoria del primer elemento del array
    min = *dir_nums;      

    for (int i = 0; i < 6; i++)
    {
        if (min > *dir_nums)   min=*dir_nums;
    
        dir_nums++;          //Se Incrementa el puntero avanzando en el array
    }
    

    cout<<min<<endl;
    return 0;
}
