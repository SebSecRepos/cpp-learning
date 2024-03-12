/*
    Identificar el tipo de dato 
*/


#include<iostream>
#include<string.h>
#include<typeinfo>

using namespace std;

template <class TYPE1, class TYPE2>
void concat_or_increase(TYPE1 first, TYPE2 second);

int main(int argc, char const *argv[])
{

    concat_or_increase(2, 3);
    
    return 0;
}

template <class TYPE1, class TYPE2>
void concat_or_increase(TYPE1 first, TYPE2 second){

    if (  string( typeid(first).name() ) == "c" ||  string( typeid(second).name() ) == "c" )
    {
        cout<<first<<second<<endl;
    }else{
        cout<<(first+second)<<endl;
    }    

}