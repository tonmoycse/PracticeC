#include <stdio.h>

int print_total_count(int arr[], int n)
{
    int i, three_count = 0, five_count = 0, both_three_five_count = 0, total_count;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            three_count++;
        }
        else if (arr[i] % 5 == 0)
        {
            five_count++;
        }

        else if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
        {
            both_three_five_count++;
        }
    }

    total_count = three_count + five_count + both_three_five_count;
    if (total_count > 0)
    {
        return total_count;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n, i, total;
    int arr[100];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    total = print_total_count(arr, n);
    printf("%d", total);

    return 0;
}