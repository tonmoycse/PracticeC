#include <stdio.h>
#include <string.h>
int count_unique_char(char *str)
{
    int hash[128] = {0};
    int i, c = 0;
    for (i = 0; i < strlen(str); ++i)
    {
        hash[str[i]] = 1;
    }
    for (i = 0; i < 128; ++i)
    {
        c += hash[i];
    }
    return c;
}

int main()
{
    int n;
    scanf("%d",&n);
    char str[300];
    for (int i = 0; i < n; i++)
    {
        scanf("%c",&str[i]);
    }
    printf("%d", count_unique_char(str));
}