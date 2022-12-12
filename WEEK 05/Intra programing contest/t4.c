#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    int arr[15];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &arr[i]);
        }
        for (int k = 0; k < n - 1; k++)
        {
            if(arr[i] < 100 && arr[0] < arr[i])
            {
                arr[0] = arr[i];
            }

        }
        if (arr[0]<100)
        {
            printf("%d\n", arr[0]);
        }
        
    }
}