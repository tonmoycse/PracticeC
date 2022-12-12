#include <stdio.h>
void printNum(int n)
{
    n = n / 4 - 3;
    for (int i = 0; i <= 6; i += 2)
    {
        printf("%d ", n + i);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printNum(n);
    }

    return 0;
}
