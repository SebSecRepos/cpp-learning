#include<iostream>
#include<string.h>
#include "rectangle.h"

using namespace std;


int main(int argc, char const *argv[])
{

    Rectangle rectangulo = Rectangle(100, 30);

    rectangulo.area();
    rectangulo.perimeter();

    return 0;
}
