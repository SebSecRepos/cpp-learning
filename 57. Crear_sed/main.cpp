#include<iostream>
#include<string>
#include<sstream>
#include<regex>

using namespace std;


/*
    .: Coincide con cualquier carácter.

    \d: Coincide con un dígito.

    \w: Coincide con un carácter alfanumérico.


    []: Clase de caracteres, por ejemplo, [aeiou] coincide con cualquier vocal.

    *, +, ?: Cuantificadores, por ejemplo, a* coincide con cero o más repeticiones de a.

    (): Grupos de captura.

    "\\b " + palabra + "\\b": Busca palabras exactas separadas
    palabra: Busca por palabras no necesariamente separadas

    palabra, regex_constants::icase
*/


void sed(string word, string toReplace ,istringstream *input_stream){
    regex pattern=regex(word);
    string line;

    while ( getline(*input_stream,line) )
    {
        if (regex_search(line,pattern))
        {

            cout<<regex_replace(line,pattern,toReplace)<<endl;
        }
    }
}




int main(int argc, char const *argv[])
{

    string texto = "Esta es la primera linea.\nEsta es la segunda linea.\nY esta es la tercera linea.\n primer semana";
    string linea;
    istringstream input_stream=istringstream(texto); // Creamos un flujo de entrada a partir del string

    string word_p = argv[1];
    string toReplace = argv[2];


    sed(word_p, toReplace, &input_stream);
    

    return 0;
}
