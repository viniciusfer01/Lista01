#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*
    Resposta: Fiz o teste com n = 100000 e os resultados foram:
    o tempo levado pelo primeiro metodo foi: 32.534000
    o tempo levado pelo segundo metodo foi: 0.010000
*/

int compare (const void * a, const void * b) 
{
    return ( *(int*)a - *(int*)b );
}

void main() {
    int n = 100000;
    int cont = 1;
    int i = 0, aux = 0;
    clock_t start, end;
    double cpu_time_used, time1, time2;

    int *v = malloc(n * sizeof(int));
    int *w = malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        v[i] = rand();
        w[i] = v[i];
    }

    start = clock();

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

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    time1 = cpu_time_used;

    for (i = 0; i < n; i++) {
        printf("O %d elemento eh: %d\n", i+1, v[i]);
    }

    free(v);

    //fim do teste do código implementado por mim
    //inicio do código para testar a funçao qsort()

    start = clock();

    qsort (w, n, sizeof(int), compare); //ordena o array

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    time2 = cpu_time_used;

    for (i = 0; i < n; i++) {
        printf("O %d elemento eh: %d\n", i+1, w[i]);
    }

    printf("o tempo levado pelo primeiro metodo foi: %lf\n", time1);
    printf("o tempo levado pelo segundo metodo foi: %lf\n", time2);

    free(w);



}
     
     
     
     
     
     




     
     