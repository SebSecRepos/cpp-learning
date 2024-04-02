#include<iostream>
#include<string>

using namespace std;

/*
    Raíz = El primer nodo
    Hijo = Debe tener otro nodo próximo
    Hoja = Debe ser el último nodo

            *        Raíz   lvl 1
           / \
         *     *     Hijo   lvl 2
        / \   / \
       *   * *   *   Hoja   lvl 3
*/


/*
    Propiedades
    Long de camino = Cant de ramas hasta llegar a un nodo
    Altura de un nodo = Cant de ramas mas largas hasta llegar a una hoja
    Profunidad = Nivel de un nodo
    Nodo hermano = mismo nivel y mismo padre
    Orden = cant max de hijos que los nodos pueden tener
*/

typedef struct Node{
    int data;
    Node *right;
    Node *left;
} _Node;

void createNode(_Node **node, int n);
void findNode(_Node **node, int n);

//Formas de mostrar
void showTree(_Node **tree, int counter);
void preOrder(_Node **tree);
void inOrder(_Node **tree);


int main(int argc, char const *argv[])
{
    _Node *tree=NULL;

    createNode(&tree, 5);
    createNode(&tree, 10);
    createNode(&tree, 4);
    createNode(&tree, 20);

    //showTree(&tree, 0);
    // findNode(&tree, 14);
    preOrder(&tree);

    return 0;
}


void createNode(_Node **tree, int n){

    if (*tree == NULL)
    {
        _Node *newNode = new _Node();
        newNode->data = n;
        newNode->right = NULL;
        newNode->left = NULL;
        *tree=newNode;
    }else{

        int raizVal = (*tree)->data;

        if ( n < raizVal )
        {
            createNode(&(*tree)->left, n);
        }else{
            createNode(&(*tree)->right, n);
        }
    }
}
 
  
void showTree(_Node **tree, int counter){        //Forma recursiva estructurada de mostrar nodos
    if (*tree == NULL)
    {
        return;
    }else{
        showTree(&(*tree)->right, counter+1);

        for (int i = 0; i < counter; i++)
        {
            cout<<"         ";
        }
        cout<<(*tree)->data<<endl;
        showTree(&(*tree)->left, counter+1);
    }
}


void findNode(_Node **tree, int n){      //Búsqueda recursiva de un nodo
    if (*tree == NULL){
        cout<<"Nodo: "<<n<<" NO encontrado"<<endl;
        return;
    }
    else if ( n == (*tree)->data ){
        cout<<"Nodo: "<<n<<" encontrado"<<endl;
        return;
    }
    else if (n < (*tree)->data){
        findNode(&(*tree)->left, n);
    }
    else{
        findNode(&(*tree)->right, n);
    }
}

void preOrder(_Node **tree){      //Muestra de nodos de forma recursiva preOrdenada
                                 //Primero los de la izquierda luego los de la derecha
    if (*tree == NULL)
    {
        return;
    }else{
        cout<<(*tree)->data<<endl;
        preOrder(&(*tree)->left);
        preOrder(&(*tree)->right);
    }
}
void inOrder(_Node **tree){     
                                
    if (*tree == NULL)
    {
        return;
    }else{
        preOrder(&(*tree)->left);
        cout<<(*tree)->data<<endl;
        preOrder(&(*tree)->right);
        cout<<(*tree)->data<<endl;
    }
}