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

void filtroExacto(string word, istringstream *input_stream){
    regex pattern=regex("\\b"+word+"\\b");
    string line;

    while ( getline(*input_stream,line) )
    {
        if (regex_search(line,pattern))
        {
            cout<<line<<endl;
        }
        
    }

}
void filtroParcial(string word, istringstream *input_stream){
    regex pattern=regex(word);
    string line;

    while ( getline(*input_stream,line) )
    {
        if (regex_search(line,pattern))
        {
            cout<<line<<endl;
        }
    }
}

void filtroParcialIcase(string word, istringstream *input_stream){
    regex pattern=regex(word, regex_constants::icase);
    string line;

    while ( getline(*input_stream,line) )
    {
        if (regex_search(line,pattern))
        {
            cout<<line<<endl;
        }
    }
}





int main(int argc, char const *argv[])
{

    string texto = "Esta es la primera linea.\nEsta es la segunda linea.\nY esta es la tercera linea.\n primer semana";
    string linea;
    istringstream input_stream=istringstream(texto); // Creamos un flujo de entrada a partir del string

    string word_p = argv[1];

    //filtroExacto("primer", &input_stream);
    //filtroParcial("primer", &input_stream);
    filtroParcialIcase("primer", &input_stream);
    

    return 0;
}
