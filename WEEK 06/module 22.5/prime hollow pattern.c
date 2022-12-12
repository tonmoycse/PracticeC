#include <stdio.h>

int prime(int num)
{
    int i, isprime = 1;
    for (i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1 || num == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int i, j, row;
    int counter = 2;
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            while (!prime(counter))
            {
                counter++;
            }
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }
}