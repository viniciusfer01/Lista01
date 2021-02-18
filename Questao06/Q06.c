#include <stdio.h>

/* 
    O programa imprimiu as seguintes saídas:
        3
        0
        6422052
        6422044

    Resposta:
        Apenas a primeira expressão referencia o terceiro elemento do vetor.

*/

void main() {
    
    int pulo[3] = {1,2,3};

    
    printf("%d\n", *(pulo + 2));
    printf("%d\n", *(pulo + 4));
    printf("%d\n", pulo + 4);
    printf("%d\n", pulo + 2);

}