#include<iostream>
#include<string>

using namespace std;


int main(int argc, char const *argv[])
{

    int nums[]={1,3,6,3,8}, *dir_nums;

    dir_nums = nums; //Apunta a la dmemoria del primer elemento del array

    for (int i = 0; i < 5; i++)
    {
        cout<<"El numero: "<<nums[i]<<", tiene direccion "<<dir_nums++<<endl; //Se incrementa con ++
    }
    
    return 0;
}
