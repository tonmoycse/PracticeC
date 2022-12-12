#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if (A + B > C && B + C > A && A + C > B)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}