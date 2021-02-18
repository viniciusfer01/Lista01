#include <stdio.h>

/*
  As saídas do primeiro programa foram:
    4 9 13 
  
  As saídas do segundo programa foram:
    61FE10 61FE14 61FE18 

  Resposta:
    O primeiro programa imprime os valores do array 'vet'.
    O segundo programa imprime os endereços de memória de cada posição do array 'vet'
*/
/* 
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
}
*/

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}
