// strupr()

#include<iostream>
#include<string.h>

using namespace std;
int main(int argc, char const *argv[])
{
    char texto1[50],texto2[50];

    cout<<"Ingrese texto1: "<<endl;
    cin.getline(texto1, sizeof(texto1));

    cout<<"Ingrese un texto similar: "<<endl;
    cin.getline(texto2, sizeof(texto2));

    strupr(texto1);
    strupr(texto2);

    if ( strcmp(texto1,texto2) != 0 )
    {
        cout<<"Error!!: "<<endl;
        return 1;
    }


    cout<<"Success "<<endl;
    cout<<"texto1: "<<texto1<<endl;
    cout<<"texto1: "<<texto2<<endl;
    return 0;
    

}
