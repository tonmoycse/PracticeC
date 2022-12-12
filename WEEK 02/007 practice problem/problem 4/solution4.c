#include <stdio.h>

void main()
{
    int i, num1, n, m;
    scanf("%d %d", &n, &m);
    num1 = 1;
    for (i = num1; i < n; i++)
    {
        if (i % m == 0)
        {
            printf("%d ", i);
        }
    }
}