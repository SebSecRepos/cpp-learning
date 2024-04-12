#include<iostream>
#include<string.h>
#include<dirent.h>
#include<fstream>
#include<regex>

using namespace std;

bool fileExist(string fileName);
void renameFile(string fileName);


int main(int argc, char const *argv[])
{
    renameFile(argv[1]);
    return 0;
}


bool fileExist(string fileName){
    fstream myFile;
    myFile.open(fileName);

    if (myFile.good() == true){
        return true;
    }else{
        return false;
    }
    myFile.close();
}
void deleteFile(string fileName){

    if ( fileExist(fileName) )
    {
        if (remove( fileName.c_str() ) == 0){
            cout<<"[+] "<<fileName<<" was deleted successfully! "<<endl;
            
        }else{
            cout<<"[!] File doesn't exist in this path"<<endl;
        }

    }
}

