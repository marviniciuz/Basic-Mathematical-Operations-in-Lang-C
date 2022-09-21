#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1, num2, re;

    printf("\n enter a value: ");
    scanf("%d",&num1);

    printf("\n enter another value: ");
    scanf("%d",&num2);

    re = num1 % num2;
    printf("\n %d \n", re);

    return 0;
}