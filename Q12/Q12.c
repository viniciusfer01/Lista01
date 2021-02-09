/* Um ponteiro para uma função é uma variável capaz 
de armazenar o endereço de uma função na memória virtual*/

#include <stdio.h>

int incremento(int a) {
    if (a == 0) {
        return 1;
    }
    a *= incremento(a-1);
}

void main() {
    int (*pf) (int) = &incremento;
    printf("O resultado de 5! eh: %d\n", pf(5));
}