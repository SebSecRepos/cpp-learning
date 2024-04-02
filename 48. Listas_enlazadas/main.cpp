#include<iostream>
#include<string>

using namespace std;

typedef struct Node{
    int data;
    Node *next;
}_Node;


void addNode(_Node **lista, int data);
void showList(_Node *lista);
void findNode(_Node *lista, int n);
void removeNode(_Node **lista, int n);

int main(int argc, char const *argv[])
{
    _Node *lista=NULL;
    addNode(&lista, 1);   
    addNode(&lista, 2);   
    addNode(&lista, 3);

    removeNode(&lista, 2);
    showList(lista);
    return 0;
}

void addNode(_Node **lista, int data){

    _Node *newNode=new _Node();
    _Node *aux1=*lista;
    _Node *aux2;

    newNode->data=data;
    newNode->next=NULL;

    while ( (aux1 != NULL) && ( aux1->data<data ) )   //Si la lista no esta vacía
    {                                                 //se recorre
        aux2=aux1;
        aux1=aux1->next;
    }
    

    if ( *lista == aux1 )                
    {
        *lista=newNode;
        newNode->next=aux1;
    }else{                      //Cuando se termina de recorrer la lista y aux1
        aux2->next=newNode;
        newNode->next=aux1;
    }
}

void showList(_Node *lista){

    while ( lista != NULL )
    {
        cout<<"Nodo: "<<lista->data<<endl;
        lista=lista->next;
    }
}

void findNode(_Node *lista, int n){
    bool found=false;
    int pos=1;

    while ( lista != NULL )
    {
        if (lista->data == n)
        {
            found=true;
            break;
        }
        lista=lista->next;
        pos++;
    }

    if ( found == true)
    {
        cout<<"Valor: "<<n<<" encontrado en la posicion: "<<pos<<endl;
    }else{
        cout<<"Valor: "<<n<<" NO encontrado"<<endl;
    }
}
void removeNode(_Node **lista, int n){

    while ( (*lista)->data != n )
    {
        lista=&(*lista)->next;
    }

    _Node *target=*lista;
    *lista=(*lista)->next;

    delete target;
}