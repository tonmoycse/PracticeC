#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], i, j = 0, n, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr1[i] % 2 != 0)
        {
            arr2[j] = arr1[i];
            j++;
        }
    }
    for (i = 0; i < j; i++)
    {
        sum += arr2[i];
    }

    if (sum % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}