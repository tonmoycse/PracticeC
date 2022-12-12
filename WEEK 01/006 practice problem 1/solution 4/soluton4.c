#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Enter another number : ");
    scanf("%d", &b);

    int sum, sub, mul;

    sum = a + b;
    sub = a - b;
    mul = a * b;

    printf("The value of sum : %d \n", sum);
    printf("The value of sub : %d \n", sub);
    printf("The value mul : %d \n", mul);
    
}