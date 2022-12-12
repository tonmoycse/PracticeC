#include <stdio.h>
int main()
{
    int h, m, hm, total;
    printf("Input hours: ");
    scanf("%d", &h);
    printf("Input minutes: ");
    scanf("%d", &m);
    hm = h * 60;
    total = hm + m;
    printf("Total: %d minutes.", total);
}