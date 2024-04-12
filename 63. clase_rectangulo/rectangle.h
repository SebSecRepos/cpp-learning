#include<iostream>

#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle
{
    private:
        int width;
        int height;
    public:
        Rectangle(int _width, int _height);
        void perimeter();
        void area();
};
Rectangle::Rectangle(int _width, int _height)
{
    width=_width;
    height=_height;
}
void Rectangle::perimeter(){
    float perim=(width*2)+(height*2);
    cout<<"El perimetro es: "<<perim<<" cm"<<endl;
}
void Rectangle::area(){
    float area=width*height;
    cout<<"El area es: "<<area<<" cm"<<endl;
}

#endif //RECTANGLE_H