#include <stdio.h>

/*
    Resposta: 
        As únicas expressões válidas são a primeira e a última.
        A segunda e a terceira expressões não são válidas pois elas tentam modificar o valor do array 'mat' e não especificam qual elemento querem modificar. 
*/


int main() {
    int mat[4], *p, x;

    p = mat + 1;
    /*
        p = mat++;
        p = ++mat;
    */
    x = (*mat)++;

    return 0;
}