#include<iostream>
#include<string>

using namespace std;

void createArray(int **list, int *n);
void orderArray(int **list, int *n);
void showArray(int **list, int *n);

int main(int argc, char const *argv[])
{
    int cant, *num_list;
    cout<<"Ingrese cant numeros"<<endl;
    cin>>cant;

    createArray(&num_list, &cant);

    showArray(&num_list, &cant);    
    orderArray(&num_list, &cant);
    cout<<"Ordenado"<<endl;
    showArray(&num_list, &cant);    
   
    delete[] num_list;    

    return 0;
}

void createArray(int **list, int *n){

    *list = new int[*n];

    for (int i = 0; i < *n; i++)
    {
        cout<<"Ingrese numero en la posicion: "<<i+1<<endl;
        cin>>(*list)[i];
    }
    
}
void showArray(int **list, int *n){

    for (int i = 0; i < *n; i++)
    {
        cout<<"Posicion "<<i+1<<" = "<<(*list)[i]<<endl;
    }
}

void orderArray(int **list, int *n){

    bool swapped;
    int aux;
    do
    {
        swapped=false;

        for (int i = 0; i < (*n-1); i++)
        {

            if ((*list)[i] > (*list)[i+1])
            {
                aux = (*list)[i];
                (*list)[i] = (*list)[i+1];
                (*list)[i+1] = aux;
                swapped=true;
            }
                        
        }

    } while (swapped == true);
    
}
