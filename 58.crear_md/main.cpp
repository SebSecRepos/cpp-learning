#include<iostream>
#include<string.h>
#include<dirent.h>
#include<fstream>
#include<regex>

using namespace std;

bool fileExist(string fileName);
void renameFile(string fileName, string newFileName);


int main(int argc, char const *argv[])
{
    renameFile(argv[1], argv[2]);
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
}
void renameFile(string fileName, string newFileName){

    if ( fileExist(fileName) )
    {
        if (rename( fileName.c_str(), newFileName.c_str() ) == 0){
            cout<<"[+] "<<fileName<<" renamed to "<<newFileName<<" successfully! "<<endl;
            
        }else{
            cout<<"[!] File doesn't exist in this path"<<endl;
        }

    }
}

