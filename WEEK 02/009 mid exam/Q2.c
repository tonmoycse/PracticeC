#include <stdio.h>
int main()
{
    int i, n, lar, sm, elem;
    elem = 4;
    scanf("%d", &n);
    lar = n;
    sm = n;
    for (i = 1; i <= elem - 1; i++)
    {
        scanf("%d", &n);
        if (n > lar)
            lar = n;
        if (n < sm)
            sm = n;
    }
    printf("Largest = %d \n", lar);
    printf("Smallest = %d", sm);
    return 0;
}