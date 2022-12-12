#include <stdio.h>
int main()
{
    int n;

    printf("Enter the amount of choclet : ");
    scanf("%d", &n);
    int choc = n;
    int pack = n;

    for (pack = n; pack >= 4;)
    {
        choc += (pack / 4);
        pack = (pack / 4) + (pack % 4);
    }
    printf("%d", choc);
}