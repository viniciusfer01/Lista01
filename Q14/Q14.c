#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b) //Função usada para comparar os valores
{
  return ( *(int*)a - *(int*)b );
}

void main() {
    int n; //tamanho do array
    int i = 0; //contador

    printf("insira o número de elementos do array: ");
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int)); //aloca a memória de acordo com o tamanho informado pelo usuário

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]); // preenche o array
    }

    qsort (v, n, sizeof(int), compare); //ordena o array

    for (i = 0; i < n; i++) {
        printf("O %d elemento eh: %d\n", i+1, v[i]);
    }

}