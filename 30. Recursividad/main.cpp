#include<iostream>
#include<string.h>

using namespace std;

int factorial(int num);

int main()
{
    
    cout<<factorial(5)<<endl;

    return 0;
}

int factorial(int num){

    if (num == 0)
    {
        num = 1;
    }else{
        num = num * factorial(num-1); 
        
    }
    
    return num;

}