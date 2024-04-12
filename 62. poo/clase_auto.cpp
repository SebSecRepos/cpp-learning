#include<iostream>
#include<string.h>

using namespace std;

/*
    attribs: llave, numero serie
    metod: encender, acelerar, frenar

    crear 3 autos
*/

class Auto{
    private:
        int key;
        int serial_number;
        bool access;
        int speed;
    public:
        Auto( int  _key, int _serial_number ); //Constructor
        void start(int _key);
        void accelerate();
        void stop();
        string brand;
        string model;
};
Auto::Auto( int  _key, int _serial_number ){  //Definición del constructor
    key=_key;
    serial_number=_serial_number;
    access=false;
    speed=0;
}
void Auto::start(int _key){
    if (_key==key)
    {
        access=true;
        cout<<"[+] Auto "<<brand<<" encendido"<<endl;
    }else{
        cout<<"[!] Llave incorrecta"<<endl;
    }
}
void Auto::accelerate(){
    if (access)
    {
        speed+=10;
        cout<<"[+] Acelerando "<<brand<<" a "<<speed<<" km/h"<<endl;
    }else{
        cout<<"[!] Auto "<<brand<<" no encendido"<<endl;
    }
}
void Auto::stop(){
    if (access)
    {
        speed-=10;
        cout<<"[+] Desacelerando a "<<speed<<" km/h"<<endl;
    }else{
        cout<<"[!] Auto no encendido"<<endl;
    }
}

int main(int argc, char const *argv[])
{
    Auto fiat = Auto(5674, 0001);
    fiat.brand="fiat";

    Auto renault = Auto(5675, 0002);
    renault.brand="renault";

    Auto gol = Auto(5676, 0003);
    gol.brand="gol";

    fiat.start(5674);
    fiat.accelerate();
    fiat.stop();
    gol.accelerate();


    
    return 0;
}

