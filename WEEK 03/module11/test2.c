#include <stdio.h>
int main()
{
    int N, K, i, j = 0;
    scanf("%d %d", &N, &K);
    int arr1[N], arr2[N];
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 1; i <= N; i++)
    {
        if (arr1[i] < K)
        {
            arr2[j] = arr1[1];
            j++;
        }
    }
    printf("%d", j);
}