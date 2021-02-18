#include "gc.h"
#include <time.h>
#include <assert.h>
#include <stdio.h>

void main() {
    int i;
    clock_t start, end;
    double cpu_time_used, time1, time2;

    printf("Iniciando contagem do tempo da libGC:");
    start = clock();

    GC_INIT();	

    for (i = 0; i < 1000000; ++i) {
        int **p = (int **) GC_MALLOC(sizeof(int *));
        int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
        assert(*p == 0);
        *p = (int *) GC_REALLOC(q, 2 * sizeof(int));
        if (i % 100000 == 0)
        printf("Tamanho do Heap = %d\n", GC_get_heap_size());
    }

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    time1 = cpu_time_used;

    printf("Iniciando contagem do tempo do malloc manual:");
    start = clock();

    for (i = 0; i < 1000000; ++i) {
        int **p = (int **) malloc(sizeof(int *));
        int *q = (int *) malloc(sizeof(int));
        assert(*p == 0);
        *p = (int *) malloc(q, 2 * sizeof(int));
        if (i % 100000 == 0)
        printf("Tamanho do Heap = %d\n", GC_get_heap_size());
        free(p);
        free(q);
    }

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    time2 = cpu_time_used;

    printf("o tempo levado pelo primeiro metodo foi: %lf\n", time1);
    printf("o tempo levado pelo segundo metodo foi: %lf\n", time2);

}