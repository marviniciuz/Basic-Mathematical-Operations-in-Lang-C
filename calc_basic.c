#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1,num2,soma,sub,mult,div;

    printf("digite o primeiro numero:\n");
    scanf("%i",&num1);
    printf("digite o segundo numero:\n");
    scanf("%i",&num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1/num2;

    printf("resultado da soma e = %i\n",soma);
    printf("resultado da subtracao e = %i\n",sub);
    printf("resultado da multiplicacao e = %i\n",mult);
    printf("resultado da divisao e = %i\n",div);

    return 0;
  
}