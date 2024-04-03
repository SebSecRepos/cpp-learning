#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include <dirent.h>

using namespace std;




/*
    En este ejercicio aplicaremos un comando de sistema sobre todo el contenido de un
    directorio.
    Para ello 

    0-> Creamos una estructura a ruta               ----> DIR *path

    1-> Creamos una estructura directorio           ----> struct dirent *elements

    2-> abrimos un directorio en base a una ruta    ----> path = opendir(char[])

    3-> Iteramos sobre los elementos                ----> while ( elements = readdir(path) )
*/



void apply_command(string path,  string command);


int main(int argc, char const *argv[])
{
    apply_command(string(argv[1]), string(argv[2]) );

    return 0;
}


void apply_command(string string_path, string command ){

    DIR *path;
    struct dirent *elements;             //Estructura que almacenara el contenido del directorio                                        


    if ( path = opendir(string_path.c_str()) )          //Abrimos el directorio
    {
        string cmd="";

        // Cargamos la estructura con los elementos de la ruta e iteramos por cada elemento                                
        while ( elements = readdir(path) )        
        {
            if( strcmp(elements->d_name, "..") !=0 && strcmp( elements->d_name, ".") != 0  ){
              
                cmd = command+" \""+ string_path+"\\" + elements->d_name+"\"" + '\n';  //Aplicamos el comando por cada elemento
                system(cmd.c_str());  
                                              
            }
        }

    }
    closedir(path);
}

