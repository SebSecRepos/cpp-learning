#include <iostream>

using namespace std;


int main(){

    unsigned int cant=0;

    do
    {
        cout<<"Ingrese cant elementos"<<endl;
        cin>>cant;
    } while (cant>100 || cant<1);
    
    unsigned int arr[cant];

    cout<<"[+] El arreglo es de: "<<cant<<" elementos"<<endl;

    for (int i = 0; i < cant; i++)
    {
        cout<<"Ingrese el valor del elemento "<<(i+1)<<":"<<endl;
        cin>>arr[i];
    }
    
    for (int i = 0; i < cant; i++)
    {
        cout<<"El valor de ("<<i<<") Es: "<<arr[i]<<endl;
    }
    
    return 0;
   
}