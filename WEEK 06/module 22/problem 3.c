#include <stdio.h>
int vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    char ch;
    ch = getchar();
    if (vowel(ch) == 1)
    {
        printf("The character is vowel");
    }
    else
    {
        printf("The character is consonant");
    }
}