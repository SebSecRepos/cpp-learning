#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

typedef struct Node{

    int data;
    Node *next;

} _Node;

void addNode( _Node **pila, int n );
void showNode( _Node *pila );
void removeNode( _Node **pila);

int main(int argc, char const *argv[])
{
    _Node *pila=NULL;
    
    addNode(&pila, 1);
    addNode(&pila, 2);
    addNode(&pila, 3);
    addNode(&pila, 4);

    showNode(pila);

    cout<<"before remove"<<endl;

    removeNode(&pila);
    showNode(pila);
   
    return 0;
}


void addNode( _Node **pila, int n ){
    _Node *newNode=new _Node();

    newNode->data=n;
    newNode->next=*pila;

    *pila=newNode;
}

void showNode( _Node *pila  ){
   do
    {
        cout<<"Numero: "<<pila->data<<endl;
        pila=pila->next;

    } while ( pila != NULL);
}

void removeNode( _Node **pila){

   _Node *aux=*pila;
   *pila=aux->next;

    delete aux;
}