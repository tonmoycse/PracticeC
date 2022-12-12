#include <stdio.h>
int binary(char s[], int x)
{
    for (int i = 0; i < x; i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char s[50];
    int a, flag;
    fgets(s, sizeof(s), stdin);
    a = strlen(s) - 1;
    flag = binary(s, a);

    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}