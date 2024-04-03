#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

void addText(string fileName, string content);

int main(int argc, char const *argv[])
{
    addText("juan.txt","holamundo");
    return 0;
}


void addText(string fileName, string content){
    fstream myFile;
    myFile.open(fileName, ios::app);

    if (myFile.fail() == true)
    {
        cout<<"Error: "<<strerror(errno)<<endl;
    }
    
    myFile<<"\n"<<content;

}