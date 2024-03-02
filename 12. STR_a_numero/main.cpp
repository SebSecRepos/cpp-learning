//atoi() atof()

#include<iostream>
#include<string.h>


using namespace std;

int main(int argc, char const *argv[])
{
    char text[10];

    
    cout<<"Ingrese número"<<endl;
    cin.ignore();
    cin.getline(text, sizeof(text));


    cout<<sizeof(text)<<" bytes"<<endl;
    cout<<sizeof(atoi(text))<<" bytes"<<endl;
    return 0;
}
