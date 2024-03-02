#include<iostream>
#include<string.h>

using namespace std;

typedef struct address
{
    char city[50];
    int city_number;
}_Addr;

typedef struct man
{
    char nombre[50];
    int edad;
    _Addr manAddr;
}_Man;


int main()
{
    _Man m1;

    m1.edad=10;
    strcpy(m1.nombre,"Juan");
    strcpy(m1.manAddr.city,"Juan");
    m1.manAddr.city_number=345;

    
    return 0;
}
