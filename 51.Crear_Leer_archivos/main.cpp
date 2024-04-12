#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

/*
    Para manejar archivos se utiliza fstream
    Para crearlos e insertar y o reemplazar contenido la función open usa ios::out
    Para leer el archivo la función open usa ios::in
    Para añadir texto extra la functión open usa ios::app
*/

void createFile( string fileName,  string fileContent);
void readFile(string fileName);

int main(int argc, char const *argv[])
{
    //createFile("text.txt", "this is text");
    //readFile("./text.txt");
    return 0;
}



void readFile(string filename){
    string text;
    fstream myFile;

    myFile.open(filename,ios::in);

    if (myFile.fail() == true)
    {
        cout<<"Error: "<<strerror(errno)<<endl;
        return;
    }

    while (!myFile.eof())
    {
        getline(myFile, text);
        cout<<text<<endl;
    }
    
    
}

void createFile(string fileName,  string fileContent){

    fstream newfile;
    newfile.open(fileName,ios::out);

    if (newfile.fail()==true){
        cout<<"Error: "<<strerror(errno)<<endl;  
        return;
    }   

    // newfile<<fileContent;
}