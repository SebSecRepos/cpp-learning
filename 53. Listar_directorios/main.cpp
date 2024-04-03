#include <dirent.h>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void listFolder(string str_path);

int main(int argc, char const *argv[])
{   
    
    listFolder(argv[1]);
    return 0;
}



void listFolder(string str_path){      //str_path, es el path en tipo de dato string
    string elem;    
    DIR *path;                       //path, es el path en tipo de dato DIR

    struct dirent *elements;          //dirent es una estructura representadno a los elementos dentro del directorio


    //Convertimos el string del path a tipo de dato DIR

    if( path = opendir(str_path.c_str()) ){  

        while ( elements = readdir(path) ){

            if (elements->d_name != "." && elements->d_name != "..")
            {
                cout<<elements->d_name<<endl;            
            }
            
        }
    }
    closedir(path);
}