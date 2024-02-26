#include <iostream>
using namespace std;


int main(){

    unsigned int quantity=0,menor=0;

    do
    {
        cout<<"Ingrese cantidad"<<endl;
        cin>>quantity;
    } while ( quantity < 1 || quantity > 100 );
    
    unsigned int arr[quantity];

    for (int i = 0; i < quantity; i++)
    {
        cout<<"Ingrese valor del elemento "<<i+1<<endl;
        cin>>arr[i];
    }

    menor=arr[0];
    
    for (int i = 0; i < quantity; i++)
    {
        if( arr[i] < menor ){
            menor=arr[i];
        }
    }  
    cout<<"El menor es: "<<menor<<endl;
    return 0;
}