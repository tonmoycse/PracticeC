#include <stdio.h>
int main()
{
    int n, i;
    char ch[1000];
    scanf("%d", n);

    for (i = 1; i <= n; i++)
    {
        fgets(ch, sizeof(ch), stdin);
        int l = strlen(ch) - 1;

        if (l > 10)
        {
            printf("%c%d%c", ch[0], l - 2, ch[l - 1]);
        }
        l=0;
    }
}