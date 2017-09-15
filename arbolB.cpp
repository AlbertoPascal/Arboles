//Referencia de JJ Santos on 9/13/17.


#include <iostream>
#include <time.h>
#include "ArbolB.h"

#include <ctime>
#include <chrono>

int main(int argc, const char * argv[]) {
    
    int orden = 3;
    srand((int)time(NULL));
    
    ArbolB<int> * arbol = new ArbolB<int>(orden);
    
    for(int i = 0; i< 100000;i++){
        arbol->Insertar(rand()%10000);
    }
    
    for (int i = 0; i < 10;i++)
    {
        arbol->Buscar(rand() % 1000);
    }
    
        Imprime:
        arbol->printAsc();
        arbol->printDesc();
    
    
    
    
    return 0;
    
}
