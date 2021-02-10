#include <stdio.h>
#include <stdlib.h>

void main() {
    int n;
    int cont = 1;
    int i = 0, aux = 0;

    printf("insira o número de elementos do array: ");
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    while (cont != 0) {
        cont = 0;
        for (i = 0; i < n-1; i++) {
            if (v[i] > v[i+1]) {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;

                cont++;
            }
        }

    }

    for (i = 0; i < n; i++) {
        printf("O %d elemento eh: %d\n", i+1, v[i]);
    }

}