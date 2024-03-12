#include<iostream>
#include<string>

using namespace std;

void getData(float& num1, float& num2);
void showData(float num1, float num2);
void dataInterchange(float *num1Addr, float *num2Addr);

int main(int argc, char const *argv[])
{
    float num1,num2;

    getData(num1, num2);

    showData(num1,num2);
    dataInterchange(&num1,&num2);
    showData(num1,num2);

    return 0;
}

void getData(float& num1, float& num2){
    cout<<"Ingresa numero 1:"<<endl;
    cin>>num1;
    cout<<"Ingresa numero 2:"<<endl;
    cin>>num2;

}
void showData(float num1, float num2){
    cout<<"Numero 1:"<<num1<<" direccion de memoria: "<<&num1<<endl;
    cout<<"Numero 2:"<<num2<<" direccion de memoria: "<<&num2<<endl<<endl;
}
void dataInterchange(float *num1Addr, float *num2Addr){
    float aux=*num1Addr;

    *num1Addr=*num2Addr;
    *num2Addr=aux;
}