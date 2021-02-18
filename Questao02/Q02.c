#include <stdio.h>

void main(){
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    /* 
        Resposta:
        o valor do printf anterior foi: 61fe1c 7 5 15 9
    */

}