#include <stdio.h>
int main()
{
    char arr[25];
    fgets(arr, sizeof(arr), stdin);

    int a, b, ans = 0, total = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] == '+')
        {
            ans = a + b;
            total += ans;
        }
        else if (arr[i] == '*')
        {
            ans = a * b;
            total += ans;
        }
    }
    printf("%d", total);
}