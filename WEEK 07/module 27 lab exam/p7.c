#include <stdio.h>
void swap(int *arr, int n)
{
    int k, i, l, r, temp;
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        scanf("%d %d", &l, &r);
        temp = *(arr + l);
        *(arr + l) = *(arr + r);
        *(arr + r) = temp;
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    swap(&arr, n);
    return 0;
}
