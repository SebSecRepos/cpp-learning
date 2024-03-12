## Reconocer tipos con la librería typeinfo

```cpp
    #include<typeinfo>
    #include<iostream>

    if (  string( typeid(first).name() ) == "c" ){
        cou<<"El tipo es un char"<<endl;
    }
    if (  string( typeid(first).name() ) == "i" ){
        cou<<"El tipo es un entero"<<endl;
    }


```

