#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float number, potResult=0;
    int pot=0;
    
    do
    {
        cout<<"ingrese numero y luego potencia"<<endl;
        cin>>number>>pot;
    } while (number <=0 || pot<=0);

    float currentVal=0;


    for (int i = 1; i <= pot; i++)
    {   
        potResult=pow(number,i);
        currentVal=currentVal+potResult; 
        cout<<number<<" ^"<<i<<" = "<<potResult<<endl;
    }
    
    cout<<"La suma de potencias es: "<<currentVal<<endl;

    return 0;
}