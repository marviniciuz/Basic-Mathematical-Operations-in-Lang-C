#include <stdio.h>
#include <stdlib.h>

int multiplicacao; //declaração de uma variavel global

int main(){

    int num1,num2;
    num1 = 8;
    num2 = 4;

    multiplicacao = num2 * num1;
    printf("O resultado da multiplicacao e = %i",multiplicacao);

    return 0;

}
