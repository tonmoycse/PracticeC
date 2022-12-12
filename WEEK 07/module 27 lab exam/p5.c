#include <stdio.h>
int sum_of_even_odd(int arr[], int n)
{
    int i, odd_sum = 0, even_sum = 0, sum;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && arr[i] % 2 != 0)
        {
            odd_sum += i + arr[i];
        }

        else if (i % 2 == 0 && arr[i] % 2 == 0)
        {
            even_sum += i + arr[i];
        }
    }

    sum = odd_sum + even_sum;
    if (sum > 0)
    {
        return sum;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, i, arr[100], total_sum;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    total_sum = sum_of_even_odd(arr, n);
    printf("%d", total_sum);

    return 0;
}