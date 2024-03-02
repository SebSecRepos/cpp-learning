//Correjir null byte

#include<iostream>

int main()
{
    int list[]={1,2,3,4,5,6,7,8},value,counter=0,inf=0,high,half,tam;
    bool found=false;

    tam=sizeof(tam)/sizeof(*list);  //Cantidad de elementos
    high=tam;

    std::cout<<"Ingrese búsqueda"<<std::endl;
    std::cin>>value;

    while ( (inf <= high) && counter < tam)
    {
        half=(inf+high)/2;  //Obtenemos el elemento del medio, si es impar la lista, se redondea
        if (list[half] == value)
        {
            found=true;
            break;
        }
        if (list[half] < value)  //Si el value, es mas grande que el valor del medio 
        {
           inf=half;            //La pos del valor inferior será a la mitad
           half=(inf+high)/2;    //El valor del medio ahora se actualiza
        }
        if (list[half] > value)  //Si el value, es mas pequeño
        {
           high=half;            //La pos del valor superior será a la mitad
           half=(inf+high)/2;   //Se actualiza el valor del medido
        }
        
        counter++; 
    }

    if (found){
        std::cout<<"Encontrado"<<std::endl;

    }else{
        std::cout<<"No ncontrado"<<std::endl;
    }

    
    return 0;
}

