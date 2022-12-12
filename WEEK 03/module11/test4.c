#include <stdio.h>
int main()
{
    int n, m=0, j = 0;
    int arr[1000], d[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (m < arr[i])
        {
            m = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        d[j] = m - arr[i];
        j++;
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", d[i]);
    }

    return 0;
}
