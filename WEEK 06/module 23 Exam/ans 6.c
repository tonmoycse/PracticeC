#include <stdio.h>

int fact(int x)
{
    int i, f = 1;
    if (x > 0)
    {
        for (i = 1; i <= x; ++i)
        {
            f *= i;
        }
    }
    return f;
}

float ratio(int a, int b)
{
    return fact(a) / (float)fact(b);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%f", ratio(a, b));
}