#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter another number : ");
    scanf("%d", &b);
    if (a == b)
        printf("\nNumber1 and Number2 are equal\n");
    else
        printf("\nNumber1 and Number2 are not equal\n");
}