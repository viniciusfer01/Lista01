#include <stdio.h>
#include <stdlib.h>

void main() {
    int i, **mat;

    mat = malloc(3 * sizeof(int));

    for (i = 0; i < 3; i++) {
        mat[i] = malloc(3 * sizeof(int)); 
    }

    for (i = 0; i < 3; i++) {
        free(mat[i]); 
    }
    
    free(mat);

}