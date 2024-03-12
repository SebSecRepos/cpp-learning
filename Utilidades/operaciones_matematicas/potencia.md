## Relizar potencia sin librerías

```cpp

    float pow(float numero, float exponente){
        
        float resultado=1;
        for(int i; i<exponente; i++){
            resultado=resultado*numero;
        }
        return resultado;
    }

```