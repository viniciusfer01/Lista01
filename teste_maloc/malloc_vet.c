#include <stdio.h>
#include <stdlib.h>

void main() {
    int *p = malloc(5 * sizeof(int));

    p[3] = 26; 

    printf("O numero eh: %d\n", p[3]);

    free(p);
}