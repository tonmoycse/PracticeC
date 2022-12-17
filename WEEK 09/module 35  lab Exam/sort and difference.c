#include <stdio.h>
void assendingsort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void descendingsort(int arr[], int n)
{
    int i, j;
   for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] < arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);

    int arr1[105], arr2[105];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    assendingsort(arr1, n);
    descendingsort(arr2, n);

    int dif[105];
    for (i = 0; i < n; i++)
    {
        dif[i] = arr1[i] - arr2[i];
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d ", dif[j]);
    }
    return 0;
}