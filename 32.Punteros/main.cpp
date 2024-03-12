#include<iostream>
#include<string>

using namespace std;


int main(int argc, char const *argv[])
{

    char firstChar = argv[0][0];

    char *firstCharAddr= &firstChar;

    while ( true )
    {
     
        printf("%c",*firstCharAddr);
        firstCharAddr++;
    }

    return 0;
}
