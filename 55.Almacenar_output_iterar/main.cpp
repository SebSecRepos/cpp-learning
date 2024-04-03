#include<iostream>
#include<string>
#include<sstream>
#include<regex>

using namespace std;

/*
    Creación de flujos de entrada

    > Nos permiten, a partir de un string procesar su contenido linea por linea
    > Como si leyeramos un archivo, esto es útil para aplicar comandos

    La función istringstream(string) permite crear el flujo de entrada a partir de un string
    Luego con getline y un bucle while se puede iterar linea por linea 

    while ( getline(input_stream, linea)  )
*/


int main(int argc, char const *argv[])
{

    string texto = "Esta es la primera línea.\nEsta es la segunda línea.\nY esta es la tercera línea.";

    istringstream input_stream=istringstream(texto); // Creamos un flujo de entrada a partir del string

    string linea;
    while ( getline(input_stream, linea) ) {
        // Aquí puedes procesar cada línea como desees
       cout << "Línea: " << linea <<endl;
    }

    return 0;
}
