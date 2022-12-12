#include <stdio.h>

void number(int n)
{
    int i;
    if (n > 0)
    {
        for (i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }

    else if (n < 0)
    {
        for (i = n; i <= -n; i++)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    number(n);
}