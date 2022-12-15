#include <stdio.h>

void swap(int *a, int *b)
{
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bublesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bublesort(arr, n);
    return 0;
}
