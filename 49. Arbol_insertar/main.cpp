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


int main(int argc, char const *argv[])
{
    _Node *arbol=NULL;

    createNode(&arbol, 5);
    createNode(&arbol, 10);
    createNode(&arbol, 4);
    createNode(&arbol, 20);

    return 0;
}
void createNode(_Node **arbol, int n){

    if (*arbol == NULL)
    {
        _Node *newNode= new _Node();
        newNode->data=n;
        *arbol=newNode;
    }else{

        _Node *currentNode = *arbol;

        while ( currentNode != NULL  )
        {
            if ( currentNode->data < n && currentNode->left == NULL )  
            {   
                currentNode->left = new _Node();
                currentNode->left->data = n;
                currentNode->left->left = NULL;
                currentNode->left->right = NULL;
                break;
            }
            
            if ( currentNode->data > n && currentNode->right == NULL )
            {   
                currentNode->right = new _Node();
                currentNode->right->data = n;
                currentNode->right->left = NULL;
                currentNode->right->right = NULL;
                break;
            }

            if ( currentNode->data < n && currentNode->left != NULL )
            {
                currentNode = currentNode->left;
            }
            
            if ( currentNode->data > n && currentNode->right != NULL )
            {
                currentNode = currentNode->right;
            }
            

        }
        
    }
    
}
 