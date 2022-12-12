#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    { 
        /* Print star */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}