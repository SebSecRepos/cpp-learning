#include<iostream>
#include<string>

using namespace std;


typedef struct Node{

    int data;
    Node *next;

} _Node;

void addNode(_Node **front, _Node **back, int data);
void showNode(_Node **front);
void removeNode(_Node **front, _Node **back);

int main(int argc, char const *argv[])
{
    _Node *front=NULL;
    _Node *back=NULL;

    addNode(&front, &back, 1);
    addNode(&front, &back, 2);
    addNode(&front, &back, 3);

    showNode(&front);

    cout<<"deleting"<<endl;

    removeNode(&front, &back);
    removeNode(&front, &back);

    cout<<"After deleting"<<endl;
    showNode(&front);
    return 0;
}

void addNode(_Node **front, _Node **back, int data){

    _Node *newNode = new _Node();

    newNode->data=data;

    if (*front == NULL)
    {
        *front = newNode;
        *back = newNode;
    }else{

        (*back)->next=newNode;
        *back=newNode;
    }
    
}

void showNode(_Node **front){

    _Node *aux=*front;

    while (aux != NULL)
    {
        cout<<"Node: "<<aux->data<<endl;
        aux=aux->next;
    }
}

void removeNode(_Node **front, _Node **back){

    if ((*front)->next == NULL )
    {
        *front=NULL;
        *back=NULL;
    }else{
        _Node *aux=*front;
        *front=aux->next;
        delete aux;
    }

}