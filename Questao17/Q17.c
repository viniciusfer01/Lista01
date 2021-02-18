#include <stdio.h>
#include <stdlib.h>

void sum (int v1[], int v2[], int v3[], int n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        v3[i] = v1[i] + v2[i];
    }
}

void main() {
    int i;
    int n = 4;
    int v1[] = {1, 3, 0, -2};
    int v2[] = {3, 5, -3, 1};

    int *pv1 = v1;
    int *pv2 = v2;
    int *v3 = malloc(n*sizeof(int));

    sum(pv1, pv2, v3, n);

    for (i = 0; i < n; i++) {
        printf("O %d iesimo elemento eh %d\n", i, v3[i]);
    }
}