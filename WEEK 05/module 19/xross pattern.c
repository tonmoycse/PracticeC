#include <stdio.h>

int main()
{
    int i, j, N;

    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            if (j == 1 || i == N)
            {
                printf("%d", i);
            }
            else if (i == 1 || j == N)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}