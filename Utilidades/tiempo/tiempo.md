## Operaciones con tiempo ctime


Obtener año actual
```cpp
    time_t t=time(NULL);
    tm* timerPtr=localtime(&t);
    
    int currentYear=timerPtr->tm_year+1900;
```