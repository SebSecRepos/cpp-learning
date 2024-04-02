#include<iostream>
#include<string>

using namespace std;

int showHiger(int *arr, int nEls);

int main(int argc, char const *argv[])
{

    int array[]={3, 6, 4, 3, 5};

    cout<<"El mayor es: "<<showHiger(array, 5)<<endl;;

    return 0;
}

 