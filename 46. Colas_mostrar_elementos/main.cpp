#include<iostream>
#include<string>

using namespace std;

typedef struct Node{
    int data;
    Node *next;
} _Node;


void addNode(_Node **front, _Node **back, int n);
void showNodes(_Node **front);


int main(int argc, char const *argv[])
{
    _Node *front=NULL;
    _Node *back=NULL;

    addNode(&front, &back, 1);
    addNode(&front, &back, 2);
    addNode(&front, &back, 3);
        
    cout<<back->data<<endl;

    showNodes(&front);
    return 0;
}

void addNode(_Node **front, Node **back, int n){
    _Node *newNode=new _Node();

    newNode->data=n;
    newNode->next=NULL;
   

    if ( *front == NULL)
    {
        *front = newNode;   
        *back = newNode;
    }else{                                              
        (*back)->next = newNode;     //Al ingresar el segundo nodo de la fila, el next del anterior (front) Es igual al nuevo nodo
        *back = newNode;            //De esta manera, es que al recorrer la cola, el front->next queda establecido
    }

}

void showNodes(_Node **front){
    _Node  *aux=*front;
    while (aux != NULL)
    {
        cout<<"Valor nodo Nro: "<<aux->data<<endl;
        aux=aux->next;
    }
    
}



/*
    1 |  |  |  |

    Cuando se cumple el else, esto es a partir del segundo nodo ingresado y sucede esta linea  (*back)->next = newNode;

    1 | 2 |  |  |     ->   El next, de 1, va a ser el dos y asi sucesivamente ... 

   
    1 | 2 | 3 |  |    ->   Ahora el next del 2 es el tres


*/