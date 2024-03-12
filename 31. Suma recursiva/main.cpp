#include<iostream>
#include<string>

using namespace std;


int sumaRec(int);


int main(int argc, char const *argv[])
{

    cout<<sumaRec(4)<<endl;
    return 0;
}

int sumaRec(int n){

    int suma=0;
    if(n == 1){
        suma=1;
    }else{
        suma=n+sumaRec(n-1);
    }
    return suma;
}