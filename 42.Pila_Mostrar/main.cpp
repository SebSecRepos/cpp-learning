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

int main(int argc, char const *argv[])
{
    _Node *pila=NULL;
    

    addNode(&pila, 1);
    addNode(&pila, 2);
    addNode(&pila, 3);
    addNode(&pila, 4);

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
