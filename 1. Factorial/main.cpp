#include <iostream>

using namespace std;

int main(){

    int number, bak=0;
    do{

        cout<<"Ingrese número"<<endl;
        cin>>number;

    }while((number != 0) && (number < 1));


    cout<<"Factorial de "<<number<<endl;
    int factorial=number;


    for (int i = number-1; i > 0; i--)
    {
        bak=factorial;
        factorial*=i;
        cout<<bak<<" * "<< i<<" = "<<factorial<<endl;
    }

    cout<<"Factorial es: "<< factorial<<endl;

    return 0;
}

