#include <stdio.h>

/*
    A primeira saída do programa foi:
        6422040 6422044 6422048 6422052 
    A segunda saída do programa foi:
        6422016 6422032 6422048 6422064
    A terceira saída do programa foi: 
        6422016 6422032 6422048 6422064 
    A quarta saída do programa foi:
        6422000 6422032 6422064 6422096

    Resposta: 
        Quando for do tipo char, os endereços serão: 4092, 4096, 4100, 4104
        Quando for do tipo int, os endereços serão: 4092, 4108, 4124, 4140
        Quando for do tipo float, os endereços serão: 4092, 4108, 4124, 4140
        Quando for do tipo double, os endereços serão: 4092, 4124, 4156, 4188

    obs: os endereços NÃO estão em hexadecimal
    obs2: achei muito estranho o endereço do int e do float ter o mesmo tamanho. 
    Após checar várias vezes não consegui fazê-los ficar diferentes :(

*/

void main() {
  int vet[] = {4, 9, 13, 22};
  int i;

  for(i = 0; i < 4; i++){
    printf("%d ", &vet+i);
  }
}