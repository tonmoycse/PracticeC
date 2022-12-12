#include <stdio.h>

void position(int merge[], int n, int k)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (i == k)
        {
            printf("\nThe %dth element in this sequence is %d", i, merge[i]);
            break;
        }
    }
}

void margeEvenOdd(int arr[], int n, int k)
{
    int i;
    int merge[n], index = 1;

    for (i = 1; i <= n; i++)
    {
        arr[i] = i;
        // printf("%d ", arr[i]);
    }

    for (i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            merge[index] = arr[i];
            index++;
        }
    }

    for (i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            merge[index] = arr[i];
            index++;
        }
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", merge[i]);
    }

    position(merge, n, k);
}

int main()
{
    int n, i, k;
    scanf("%d%d", &n, &k);
    int arr[100];

    margeEvenOdd(arr, n, k);

    return 0;
}