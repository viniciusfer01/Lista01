#include <stdio.h>

void main() {
    int i = 3, j = 5;
    int *p, *q;
    
    p = &i;
    q = &j;

    if(p == &i) {
        printf("O resultado da primeira expressao eh verdadeiro\n");
    }
    else {
        printf("O resultado da primeira expressao eh falso\n");
    }

    printf("O resultado da segunda expressao eh: %d\n", *p - *q);

    printf("O resultado da terceira expressao eh: %d\n", **&p);    
    
    printf("O resultado da quarta expressao eh: %d\n", 3 - *p/(*q) + 7);

    /*
        Respostas:
        O resultado da primeira expressao eh verdadeiro
        O resultado da segunda expressao eh: -2
        O resultado da terceira expressao eh: 3
        O resultado da quarta expressao eh: 10
    */
}