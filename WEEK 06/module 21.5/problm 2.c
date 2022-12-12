#include <stdio.h>

int hollow(int x)
{
    for(int i=x; i>=1; i--)
    {
        for(int j=i; j<x; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

}

int main()
{
    int i, j, n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    hollow(n);
    printf("\n");
    return 0;
}