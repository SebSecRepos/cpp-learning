
#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    char nombre[5];

    cout<<"nombre:"<<endl;
    cin>>nombre;            //buffer overflow usar cin.getline()

    cout<<nombre<<endl;
    return 0;
}
