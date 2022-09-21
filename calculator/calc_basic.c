#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1,num2,sum,sub,mult,div;

    printf("enter the first integer:\n");
    scanf("%i",&num1);
    printf("enter the second whole number:\n");
    scanf("%i",&num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1/num2;

    printf("result of the sum and = %i\n",sum);
    printf("result of subtraction and = %i\n",sub);
    printf("result of multiplication and = %i\n",mult);
    printf("result of division and = %i\n",div);

    return 0;
  
}