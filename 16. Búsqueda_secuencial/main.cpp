#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int lista[6]={3,3,6,8,7,3},numero,pos=0;
    bool found=false;
    cout<<"Ingrese busqueda"<<endl;
    cin>>numero;

    while (!found)
    {
        if ( numero == lista[pos] )
        {
            cout<<"Encontrado!"<<lista[pos]<<endl;
            found=true;
            break;
        }
        
        if (pos == 6 && !found)
        {
            cout<<"No se ha encontrado"<<endl;
            return 1;
        }
        pos++;
    }
        
    return 0;
}
