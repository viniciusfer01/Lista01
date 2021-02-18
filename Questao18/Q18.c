#include <stdio.h>
#include <stdlib.h>


void multiplicarMatriz(int **matriz1, int **matriz2, int **matrizFinal, int nlinhasm1, int ncol1row2, int ncolunas2){
    int i, j, k;

    for (i = 0; i < nlinhasm1; i++){
        for (j = 0; j < ncolunas2; j++){
            for (k = 0; k < ncol1row2; k++){
                matrizFinal[i][j] += matriz1[i][k]*matriz2[k][j];
            }
        }
    }
}
void lerMatriz(int **matriz, int nlinhas, int ncolunas){
    int i, j;

    for (i = 0; i < nlinhas; i++){
        for(j = 0; j < ncolunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}
void alocarMatriz(int **matriz, int nlinhas, int ncolunas){
    int i, j;

    matriz = malloc(nlinhas * sizeof(int*));
    matriz[0] = malloc(nlinhas * ncolunas * sizeof(int));
    for(i = 0; i < nlinhas-1; i++){
        matriz[i] = matriz[i-1]+ncolunas;
    }
    printf("matriz alocada com sucesso\n");
}
void imprimirMatriz(int **matriz, int nlinhas, int ncolunas){
    int i, j;

    for(i = 0; i < nlinhas; i++){
        for(j = 0; j < ncolunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


void main()
{
    int nlinhasm1, nlincol, ncolunasm2;
    int i, j;
    int **matriz1, **matriz2, **soma;

    printf("informe a quantidade de linhas da matriz1\n");
    scanf("%d", &nlinhasm1);

    printf("informe a quantidade de colunas da matriz 1 e linhas da matriz 2\n");
    scanf("%d", &nlincol);

    printf("informe a quantidade de colunas da matriz2\n");
    scanf("%d", &ncolunasm2);

    matriz1 = malloc(nlinhasm1 * sizeof(int*));
    matriz1[0] = malloc(nlinhasm1 * nlincol * sizeof(int));
    for (i = 1; i < nlinhasm1; i++){
        matriz1[i] = matriz1[i-1]+nlincol;
    }

    matriz2 = malloc(nlincol * sizeof(int*));
    matriz2[0] = malloc(nlincol * ncolunasm2 * sizeof(int));
    for(i = 1; i < nlincol; i++){
        matriz2[i] = matriz2[i-1] + ncolunasm2;
    }

    soma = malloc(nlinhasm1 * sizeof(int*));
    soma[0] = malloc(nlinhasm1 * ncolunasm2 * sizeof(int));
    for(i = 1; i < nlinhasm1; i++){
        soma[i] = soma[i-1] + ncolunasm2;
    }

    printf("leia a matriz 1 %d x %d\n", nlinhasm1, nlincol);
    lerMatriz(matriz1, nlinhasm1, nlincol);
    printf("leia a matriz 2 %d x %d\n", nlincol, ncolunasm2);
    lerMatriz(matriz2, nlincol, ncolunasm2);

    for(i = 0; i < nlinhasm1; i++){
        for(j = 0; j < ncolunasm2; j++){
            soma[i][j] = 0;
        }
    }

    multiplicarMatriz(matriz1, matriz2, soma, nlinhasm1, nlincol, ncolunasm2);

    printf("A primeira matriz informada foi: \n");
    imprimirMatriz(matriz1, nlinhasm1, nlincol);
    printf("A segunda matriz informada foi: \n");
    imprimirMatriz(matriz2, nlincol, ncolunasm2);
    printf("O resultado da multiplicacao foi: \n");
    imprimirMatriz(soma, nlinhasm1, ncolunasm2);

}






