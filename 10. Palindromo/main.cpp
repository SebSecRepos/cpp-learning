// strrev()

#include<iostream>
#include<string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char palabra[50], palabra_rev[50] ;
    cout<<"Ingrese palabra"<<endl;

    cin.getline(palabra, sizeof(palabra));

    strcpy(palabra_rev, palabra);
    strrev(palabra_rev);           // Actualiza la variable, NO devuelve nada


    if ( strcmp(palabra_rev, palabra) == 0 )
    {
        cout<<"Tu palabra es un palindromo"<<endl;
    }else{
        cout<<"Tu palabra NO es un palindromo"<<endl;
    }
    cout<<"Original: "<<palabra<<endl;
    cout<<"Invertido: "<<palabra_rev<<endl;
    
    return 0;
}
