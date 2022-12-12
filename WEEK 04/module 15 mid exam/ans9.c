#include <stdio.h>

int main()
{

    int arr[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    int i, j, temp, len;
    len = sizeof(arr) / sizeof(arr[0]);

    for (j = 0; j < len -1; j++)
    {

        for (i = 0; i < 5; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        for (i = 0; i < len; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}