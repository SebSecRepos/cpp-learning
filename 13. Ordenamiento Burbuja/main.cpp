#include<iostream>
#include<string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[5]={4,3,1,5,2};
    bool swapped;

    cout<<"Original: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<numbers[i]<<", ";
    }



    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (numbers[j] > numbers[ j + 1])
            {
                int temp=numbers[j];
                numbers[j]=numbers[ j + 1 ];
                numbers[ j + 1 ]=temp;
                swapped=true;   
            }
        }
    }
    

// Versión MEJORADA
    // do                                           //Seguira ordenando hasta que swapped sea false
    // {
    //     swapped=false;                          //Swapped Es false
    //     for (int i = 0; i < 4; i++)
    //     {
    //         if (numbers[i] > numbers[ i + 1 ] )   //Si esta condición no se cumple, swapped nunca será true
    //         {                                    //Por tanto no se realiza el ordenamiento 
    //             int temp=numbers[i];
    //             numbers[i]=numbers[ i + 1 ];
    //             numbers[ i + 1 ]=temp;
    //             swapped=true;                      //Es true
    //         }
    //     }
        
    // } while (swapped);
    

    
    cout<<"Ordenado: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<numbers[i]<<", ";
    }
    
     
    return 0;
}
