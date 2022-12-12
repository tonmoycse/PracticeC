#include <stdio.h>

int finder(char x[], char y)
{
    for (int i = 0; x[i] != '\0'; ++i)
    {
        if (y == x[i])
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    char str[100], a, b, c;

    a = '1';
    b = '9';
    c = '7';
    fgets(str, sizeof(str), stdin);

    if (finder(str, a) == 1 && finder(str, b) == 1 && finder(str, c) == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}