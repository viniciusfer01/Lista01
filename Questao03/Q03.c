#include <stdio.h>

    //p = i; - Expressão ilegal, pois p é um ponteiro e não pode receber o valor da variável inteira i (apesar do programa funcionar);
    //q = &j; - Expressão legal;
    //p = &*&i; - Expressão legal;
    //i = (*&)j; - Expressão ilegal, pois os parênteses geram erro no programa;
    //i = *&j; - Expressão legal;
    //i = *&*&j; - Expressão legal;
    //q = *p; - Expressão ilegal, pois precisa de casting para funcionar;
    //i = (*p)++ + *q; - Expressão ilegal;

void main() {

    int i = 10, j = 12;
    int *p = &i, *q;

    printf("%p", q);

}