#include <stdio.h>
#include <locale.h>
#include <ctype.h>
 
void exibirMatriz(int n, int m, float matriz[n][m])
{
    int l, c;
    printf("\n\n");
    for (l = 0; l < n; l++)
    {
        for (c = 0; c < m; c++)
        {
            printf("%.1f  ", matriz[l][c]);
        }
 
        printf("\n");
    }
}
 

 
void multiplicacao(int n1, int m1, int m2, float matriz1[n1][m1], float matriz2[m1][m2], float matriz3[n1][m2])
{
    int l, c, x;
    float aux = 0;

    printf("\n----------------\n\n");
    
    exibirMatriz(n1,m1,matriz1);
 
    printf("\nx\n\n");

    exibirMatriz(m1, m2, matriz2);
    
    printf("\n=\n\n");
 
    for (l = 0; l < n1; l++)
    {
        for (c = 0; c < m2; c++)
        {
            matriz3[l][c] = 0;
            for (x = 0; x < m1; x++)
            {
                aux += matriz1[l][x] *matriz2[x][c];
            }
 
            matriz3[l][c] = aux;
            aux = 0;
        }
    }
 
    exibirMatriz(n1,m2,matriz3);
    
    printf("\n\n");
 
}
 
 
int main()
{
    int n1 = 0, m1 = 0, m2 = 0, l = 0, c = 0;
    float numero;

    printf("Multiplicação de duas matrizes\n");
                    
        printf("\nDigite o número de linhas da matriz 1:\n");
        scanf("%d", &n1);
        printf("\nDigite o número de colunas da matriz 1:\n");
        scanf("%d", &m1);

        printf("\n");
        printf("\nDigite o número de colunas da matriz 2:\n");
        scanf("%d", &m2);
                
 
        float matriz1[n1][m1], matriz2[m1][m2], matriz3[n1][m2];
 
        printf("\n\nDigite os valores da matriz 1.\n\n");
 
        for (l = 0; l < n1; l++)
        {
            for (c = 0; c < m1; c++)
            {
                scanf("%f", &matriz1[l][c]);
            }
        }
 
        exibirMatriz(n1, m1, matriz1);
 
        printf("\n\nDigite os valores da matriz 2.\n\n");
 
        for (l = 0; l < m1; l++)
        {
            for (c = 0; c < m2; c++)
            {
                scanf("%f", &matriz2[l][c]);
            }
        }
 
        exibirMatriz(m1, m2, matriz2);
 
        printf("\n");
 
        multiplicacao(n1, m1, m2, matriz1, matriz2, matriz3);
 
 

    return 0;
}