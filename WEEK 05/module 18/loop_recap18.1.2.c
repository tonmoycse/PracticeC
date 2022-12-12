#include <stdio.h>
int main()
{
    int i, sum=0;
    while (i < 10)
    {
        sum+=pow(i,3);
        i++;
    }
    printf("%d", sum);
    return 0;
}