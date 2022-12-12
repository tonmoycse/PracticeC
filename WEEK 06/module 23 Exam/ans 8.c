#include <stdio.h>

void shifter(char s[], int n)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = (s[i] - 'a' + n) % 26 + 'a';
    }
    printf("%s\n", s);
}

int main()
{
    char s[100];
    scanf("%s", &s);
    int k;
    scanf("%d", &k);
    shifter(s, k);
    return 0;
}