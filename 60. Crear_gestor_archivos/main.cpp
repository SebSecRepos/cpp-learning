#include<iostream>
#include<string.h>
#include<dirent.h>
#include<fstream>
#include<unistd.h>

using namespace std;

void menu();
void showOpt();
void listFiles();
void readFile();
void createFile();
void deleteFile();
void renameFile();
void addTextToFile();
void executingFunc(void (*foo)());

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}


void showOpt(){
    cout<<"[1]- Listar archivos"<<endl;
    cout<<"[2]- Leer archivos"<<endl;
    cout<<"[3]- Crear archivo"<<endl;
    cout<<"[4]- Borrar archivos"<<endl;
    cout<<"[5]- Renombrar archivo"<<endl;
    cout<<"[6]- Editar archivo"<<endl;
    cout<<"[7]- Salir"<<endl;
    cout<<"\n";
    cout<<"[*]- Ingrese una opcion"<<endl;
}


void executingFunc(void (*foo)()){  //Recibe una función como parámetro y la ejecuta
    system("cls");                  //Se aprovecha a limpiar pantalla y realizar la pausa
    foo();
    system("pause");
}

void listFiles(){
    string str_path;
    DIR *path;
    dirent *elements;

    cout<<"[+] Ingrese la ruta absoluta"<<endl;
    cin>>str_path;

    system("cls");
    if ( path = opendir(str_path.c_str()) )    
    {
        cout<<"[+] Contenido de: "<<str_path<<endl;
        while (elements = readdir(path))
        {
            if (strcmp(elements->d_name, "..") != 0 && strcmp(elements->d_name, ".") != 0)
            {
                cout<<"\t"<<elements->d_name<<endl;
            }
        }
        closedir(path);
    }else{
        cout<<"[!] No se encuentra la ruta"<<endl;
    }
    
}
void readFile(){
    string str_path, content;
    fstream file;
    cout<<"[+] Ingrese la ruta absoluta"<<endl;
    cin>>str_path;
    file.open(str_path, ios::in);

    system("cls");
    if (file.fail())
    {
        cout<<"[!] Error al abrir archivo, compruebe la ruta y los permisos"<<endl;
    }else{

        cout<<"[+] Contenido de: "<<str_path<<endl;
        while (!file.eof())
        {
            getline(file, content);
            cout<<"\t"<<content<<endl;
        }
    }

    file.close();

}
void createFile(){
    string path="", content="", fileName="";
    fstream newFile;

    cout<<"[+] Ingrese la ruta"<<endl;
    cin>>path;
    cout<<"[+] Ingrese el nombre del archivo"<<endl;
    cin>>fileName;

    cout<<path.c_str()<<endl;

    if (access(path.c_str(), W_OK) != 0)
    {   
        cout<<"[!] No tiene permisos de escritura en la ruta"<<endl;
    }else{

        newFile.open(path+'\\'+fileName, ios::out);

        if ( newFile.fail() == true )
        {
            cout<<"Error: "<<strerror(errno)<<endl;
        }else{
            cout<<"[+] Archivo creado, ingrese texto"<<endl;
            cin.ignore();
            getline(cin, content);
            newFile<<content;
        }
        newFile.close();
    }
}
void deleteFile(){
    string path_to_file="";
    fstream file;

    cout<<"Ingrese ruta absoluta del archivo a eliminar"<<endl;
    cin.ignore();
    getline(cin,path_to_file);

    cout<<path_to_file<<endl;

    system("pause");
    file.open(path_to_file.c_str());

    if (file.good() == true )
    {
        if  (remove(path_to_file.c_str() ) == 0)
        {
            cout<<"Archivo: "<<path_to_file<<" eliminado satisfactoriamente"<<endl;        
            file.close();
        }else{
            cout<<strerror(errno)<<endl;
        }
        
    }else{
        cout<<"[!] Error revise la ruta"<<endl;
    }
    
}
void renameFile(){
    cout<<"renaming"<<endl;
}
void addTextToFile(){
    cout<<"adding text"<<endl;
}


void menu(){

    string input;    
    bool whileVal=true;

    while (whileVal)
    {
        system("cls");
        showOpt();
        cin>>input;
        int opt=0;

        opt = atoi(input.c_str()) ;

        if ( opt >= 1 || opt <= 7  )
        {
                
            switch (opt)
            {
                case 1:
                    executingFunc(listFiles);
                    break;
                case 2:
                    executingFunc(readFile);
                    break;
                case 3:
                    executingFunc(createFile);
                    break;
                case 4:
                    executingFunc(deleteFile);
                    break;
                case 5:
                    executingFunc(renameFile);
                    break;
                case 6:
                    executingFunc(addTextToFile);
                    break;
                case 7:
                    system("cls");
                    cout<<"[+] Saliste !"<<endl;
                    whileVal=false;
                    break;

                default:
                    break;
            }
        }
        else{
            cout<<"[!] Valor incorrecto"<<endl;
            system("pause");
        }
    }
}
