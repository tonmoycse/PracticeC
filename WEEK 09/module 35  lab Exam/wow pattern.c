#include <stdio.h>

int main()
{
    int i, j, rows;
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        if (i % 2 != 0)
        {
            for (j = i; j < rows; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= (2 * i - 1); j++)
            {
                printf("^");
            }
            printf("\n");
        }
        else
        {
            for (j = i; j < rows; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= (2 * i - 1); j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}