#include <stdio.h>

void product(int m1[][], int m2[][], int m3[][], int la, int ca, int cb) {
    int i = 0;
    int j = 0;

    for (int i = 0; i < la; i++){
        for (int j = 0; j < ca; j++) {
            aux += m1[i][j] + m2[j][i];
        }

        m3[i][j] = aux;
        aux = 0;
    }
}

void main() {

}