#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n); // haw many word wants to order
    char str[n][100], temp[100];
    for (int i = 0; i <=n; i++) // input words
    {
        fgets(str[i], sizeof(str[i]), stdin);
    }
    for (int i = 0; i <=n; i++) // sort string in the lexicographical order
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\n Lexicographical order: \n");
    for (int i = 0; i <= n; i++)
    {
        fputs(str[i], stdout);
    }
    return 0;
}